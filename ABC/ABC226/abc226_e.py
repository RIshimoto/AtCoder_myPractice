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

N, M = map(int, input().split())
uf = UnionFind(N)
ans = 0
for _ in range(M):
    U, V = map(int, input().split())
    U, V = U - 1, V - 1
    if uf.isconnect(U, V):
        ans += 2
    uf.connect(U, V)

set
for i in range(N):
    if uf[i] == 
        cnt += 1
print(ans)
