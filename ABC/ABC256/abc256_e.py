import sys
sys.setrecursionlimit(10**6)
N = int(input())
X = list(map(int, input().split()))
C = list(map(int, input().split()))

class UnionFind:
    def __init__(self, n):
        self.parent = [i for i in range(n)]

    def union(self, i, j):
        i = self.find(i)
        j = self.find(j)
        if i < j:
            i, j = j, i
        self.parent[i] = j

    def find(self, i):
        if self.parent[i] == i:
            return i
        self.parent[i] = self.find(self.parent[i])
        return self.parent[i]

    def isconnect(self, i, j):
        i = self.find(i)
        j = self.find(j)
        if i == j:
            return True
        return False

def dfs(i, j, prev=True):
    if i == j and prev == False:
        return float('inf')
    return min(C[i], dfs(X[i]-1, j, False))

uf = UnionFind(N)
ans = 0
for i in range(N):
    j = X[i] - 1
    if uf.isconnect(i, j) == True:
        ans += dfs(i, i)
    else:
        uf.union(i, j)
print(ans)
