import sys
sys.setrecursionlimit(10**6)
H, W = map(int, input().split())
Q = int(input())

class UnionFind:
    def __init__(self, n): 
        self.parent = [-1] * n

    def union(self, i, j):
        i = self.find(i)
        j = self.find(j)
        if i == j:
            return
        self.parent[i] = j

    def find(self, i):
        if self.parent[i] == -1:
            return i
        self.parent[i] = self.find(self.parent[i])
        return self.parent[i]

    def is_connect(self, i, j):
        if self.find(i) == self.find(j):
            return True
        return False

uf = UnionFind(H*W)
used = [[False for _ in range(W)] for _ in range(H)]
for _ in range(Q):
    q = list(map(int, input().split()))
    if q[0] == 1:
        r, c = q[1:]
        r, c = r - 1, c - 1 
        used[r][c] = True
        for dx, dy in [(0, -1), (0, 1), (-1, 0), (1, 0)]:
            nr, nc = r + dy, c + dx
            if nr < 0 or nr >= H or nc < 0 or nc >= W:
                continue
            if used[nr][nc] == False:
                continue
            uf.union(r*W+c, nr*W+nc)

    elif q[0] == 2:
        ra, ca, rb, cb = q[1:]
        ra, ca, rb, cb = ra-1, ca-1, rb-1, cb-1

        if used[ra][ca] == False or used[rb][cb] == False:
            print("No")
            continue

        if uf.is_connect(ra*W+ca, rb*W+cb):
            print("Yes")
        else:
            print("No")

