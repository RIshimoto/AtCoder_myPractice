import sys
sys.setrecursionlimit(10**6)
N, Q = map(int, input().split())
lr = [map(int, input().split()) for _ in range(Q)]
l, r = [list(i) for i in zip(*lr)]

class UnionFind:
    def __init__(self, n):
        self.parent = [i for i in range(n)]

    def union(self, i, j):
        i = self.find(i)
        j = self.find(j)
        if i < j:
            self.parent[i] = j
        else:
            self.parent[j] = i
        
    def find(self, i):
        if self.parent[i] == i:
            return i
        self.parent[i] = self.find(self.parent[i])
        return self.parent[i]
        
    def is_connect(self, i, j):
        if self.find(i) == self.find(j): 
            return True
        return False

uf = UnionFind(N+1)
for i in range(Q):
    uf.union(r[i], l[i]-1)
if uf.is_connect(0, N):
    print("Yes")
else:
    print("No")
