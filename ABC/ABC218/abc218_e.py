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
edge = []
for _ in range(M):
    A, B, C = map(int, input().split())
    A, B = A-1, B-1
    edge.append((C, A, B))
edge.sort()
uf = UnionFind(N)
ans = 0
for c, a, b in edge:
    if uf.isconnect(a, b) == False:
        uf.union(a, b)
    else:
        if c > 0:
            ans += c
print(ans)
