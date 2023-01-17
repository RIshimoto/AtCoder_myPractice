class UnionFind:
    def __init__(self, n):
        self.parent = [-1] * n

    def find(self, i):
        if self.parent[i] == -1:
            return i
        self.parent[i] = self.find(self.parent[i]%N)
        return self.parent[i]

    def union(self, i, j):
        i = self.find(i)
        j = self.find(j)
        if i < j:
            i = j
        self.parent[i] = j

N = 2**20
uf = UnionFind(N)
A = [-1] * N
Q = int(input())
for _ in range(Q):
    t, x = map(int, input().split()) 
    if t == 1:
        i = uf.find(x%N)
        uf.parent[i] = i+1
        A[i] = x
    elif t == 2:
        print(A[x%N])
