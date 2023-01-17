import bisect
import sys
sys.setrecursionlimit(10**6)

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

def solve(N, K, P):
    uf = UnionFind(N + 1)
    table = []
    cnts = [0] * (N + 1)
    for p in P:
        if len(table) == 0 or table[-1] < p:
            i = len(table)
            table.append(p)
            cnts[p] = 1
        else:
            i = bisect.bisect(table, p)
            uf.union(table[i], p)
            cnts[p] = cnts[table[i]] + 1
            table[i] = p
        if cnts[p] == K:
            table.pop(i)
        
    Ptoi = {}
    for i, p in enumerate(P, 1):
        Ptoi[p] = i
                 
    ans = [-1] * N
    for i in range(1, N+1):
        parent = uf.find(i)
        if cnts[parent] == K:
            ans[i-1] = Ptoi[parent]
    return ans

if __name__ == '__main__':
    N, K = map(int, input().split())
    P = list(map(int, input().split()))
    ans = solve(N, K, P)
    print(*ans)
