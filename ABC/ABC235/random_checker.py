def random_generator():
    import random
    N = random.randint(2, 5)
    N = 5
    M = N*(N-1)//2
    Q = random.randint(1, M)
    abc = []
    cs = set()
    for a in range(1, N):
        for b in range(a+1, N+1):
            c = random.randint(1, 10)
            while c in cs: 
                c = random.randint(1, 100)
            cs.add(c)
            abc.append([a, b, c])
    uvw = []
    for _ in range(Q):
        u = random.randint(1, N)
        v = random.randint(1, N)
        while v == u:
            v = random.randint(1, N)
        w = random.randint(1, 10)
        while w in cs:
            w = random.randint(1, 10)
        uvw.append([u, v, w])
    return N, M, Q, abc, uvw



def solve_Jury(N, M, Q, abc, uvw):
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

        def is_connect(self, i, j):
            i = self.find(i)
            j = self.find(j)
            if i == j:
                return True
            return False

    ans = []
    for i in range(Q):
        u, v, w = uvw[i]
        u, v = u-1, v-1

        cost = []
        cost.append((w, u, v))
        for i in range(M):
            a, b, c = abc[i]
            a, b = a-1, b-1
            cost.append((c, a, b))
        cost.sort() 

        ok = False
        uf = UnionFind(N)
        for i in range(M):
            c, a, b = cost[i]
            if uf.is_connect(a, b) == False:
                uf.union(a, b)
                if (a == u and b == v) or (a == v and b == u):
                    ok = True
                    break
        if ok:
            ans.append("Yes")
        else:
            ans.append("No")
    return ans

if __name__ == '__main__':
    from abc235_e import solve

    for t in range(10):
        N, M, Q, abc, uvw = random_generator()
        J1 = solve(N, M, Q, abc, uvw)
        J2 = solve_Jury(N, M, Q, abc, uvw)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(N, M, Q)
            print(*abc)
            print(*uvw)
            exit()
    print("Yey!")
