class UnionFind:
    def __init__(self, n):
        self.parent = [-1 for i in range(n)]

    def union(self, i, j):
        i = self.find(i)
        j = self.find(j)
        if i < j:
            i, j = j, i
        self.parent[i] += self.parent[j]
        self.parent[j] = i

    def find(self, i):
        if self.parent[i] < 0:
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
graph = [[] for _ in range(N)]
for _ in range(M):
    A, B = map(int, input().split())
    A, B = A-1, B-1
    if A > B:
        A, B = B, A
    graph[A].append(B)

uf = UnionFind(N)
cnt_edge = [0] * N
for i in range(N-1, -1, -1):
    for j in graph[i]:
        if uf.isconnect(i, j) == False:
            uf.union(i, j)
            cnt_edge[i] += 1

ans = [0] * (N + 1)
for i in range(N-1, -1, -1):
    ans[i] = ans[i+1] - cnt_edge[i] + 1
print(*ans[1:])
