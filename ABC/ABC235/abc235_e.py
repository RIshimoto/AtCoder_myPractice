def solve(N, M, Q, abc, uvw):
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

    edge = []
    for i in range(M):
        a, b, c = abc[i]
        a, b = a-1, b-1
        edge.append((c, a, b, -1))

    for i in range(Q):
        u, v, w = uvw[i]
        u, v = u-1, v-1
        edge.append((w, u, v, i))

    edge.sort()
    uf = UnionFind(N)
    ans = [None] * Q 
    for w, u, v, i in edge:
        if i == -1:
            if uf.isconnect(u, v) == False:
                uf.union(u, v)
        else:
            if uf.isconnect(u, v) == False:
                ans[i] = "Yes"
            else:
                ans[i] = "No"

    return ans


if __name__ == '__main__':
    N, M, Q = map(int, input().split())
    abc = [list(map(int, input().split())) for _ in range(M)]
    uvw = [list(map(int, input().split())) for _ in range(Q)]
    ans = solve(N, M, Q, abc, uvw)
    print(*ans)

