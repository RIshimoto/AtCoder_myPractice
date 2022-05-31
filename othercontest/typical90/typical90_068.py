import sys
sys.setrecursionlimit(10**6)
class UnionFind:
    def __init__(self, n):
        self.parent = [i for i in range(n)]

    def find(self, i):
        if self.parent[i] == i:
            return i
        self.parent[i] = self.find(self.parent[i])
        return self.parent[i]

    def union(self, i, j):
        i = self.find(i)
        j = self.find(j)
        self.parent[i] = j

    def is_connect(self, i, j):
        i = self.find(i)
        j = self.find(j)
        if i != j:
            return False
        return True

N = int(input())
Q = int(input())
TXYV = [map(int, input().split()) for _ in range(Q)]
T, X, Y, V = [list(i) for i in zip(*TXYV)]

sum = [0] * (N-1)
for i in range(Q):
    if T[i] == 0:
        sum[X[i]-1] = V[i]

pot = [0] * N
for i in range(N-1):
    pot[i+1] = sum[i] - pot[i]

uf = UnionFind(N)
for i in range(Q):
    t, x, y, v = T[i], X[i]-1, Y[i]-1, V[i]
    if t == 0:
        uf.union(x, y)
    elif t == 1:
        if uf.is_connect(x, y) == False:
            print("Ambiguous")
        else:
            if (x - y) % 2 == 0:
                ans = pot[y] + (v - pot[x])
            else:
                ans = pot[y] - (v - pot[x])
            print(ans)
