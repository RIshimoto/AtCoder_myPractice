def random_generator():
    import random
    N = random.randint(1, 10)
    M = random.randint(1, 10)
    AB = []
    for _ in range(M):
        A = random.randint(1, N)
        B = random.randint(1, N)
        while A == B:
            B = random.randint(1, N)
        AB.append([A, B])
    return N, M, AB

def solve_Jury(N, M, AB):
    from itertools import permutations
    for t in list(permutations(range(1, N+1), N)):
       d = {}
       for i, v in enumerate(t):
           d[v] = i
       ok = True
       for ab in AB:
           a, b = ab[0], ab[1]
           if d[a] > d[b]:
               ok = False
       if ok:
           return t
    return [-1]

if __name__ == '__main__':
    from abc223_d import solve

    for t in range(101):
        N, M, AB = random_generator()
        J1 = solve(N, M, AB)
        J2 = solve_Jury(N, M, AB)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(N, M)
            for ab in AB:
                print(*ab)
            with open("testcase", mode="w") as f: 
                f.write("{} {}\n".format(N, M))
                for ab in AB:
                    f.write("{} {}\n".format(ab[0], ab[1]))
            exit()
    print("Yey!")
