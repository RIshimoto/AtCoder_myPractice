import sys
sys.setrecursionlimit(10**6)
from collections import defaultdict

N, M = map(int, input().split())

class UnionFind:
    def __init__(self, n):
        self.parent = list(range(n))

    def find(self, i):
        if self.parent[i] == i:
            return i
        self.parent[i] = self.find(self.parent[i])
        return self.parent[i]

    def union(self, i, j):
        i = self.find(i)
        j = self.find(j)
        self.parent[j] = i

uf = UnionFind(N)
for _ in range(M):
    A, B = map(int, input().split())
    A -= 1
    B -= 1
    uf.union(A, B)

cnt = defaultdict(int)
for i in range(N):
    cnt[uf.find(i)] += 1
print(max(cnt.values()))
