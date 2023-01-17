def random_generator():
    import random
    N = random.randint(1, 100)
    M = random.randint(1, 100)
    S = []
    for _ in range(N):
        S.append(random.randint(-10, 10))
    X = []
    for _ in range(N):
        X.append(random.randint(-10, 10))
    return N, M, S, X

def solve_Jury(N, M, S, X):
    mx = 0
    for a in range(-100, 100):
        b = a
        cnt = 0
        for s in S:
            cnt += X.count(b)
            b = s - b
        cnt += X.count(b)
        if mx < cnt:
            a_mx = a
        mx = max(mx, cnt)
    return mx, a_mx
    

if __name__ == '__main__':
    from abc255_e import solve

    for t in range(1001):
        N, M, S, X = random_generator()
        J1 = solve(N, M, S, X)
        J2, a_mx = solve_Jury(N, M, S, X)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(N, M)
            print(*S)
            print(*X)
            print("->", a_mx)
            with open("testcase", mode="w") as f: 
                f.write("{} {}\n".format(N, M))
                for s in S:
                    f.write("{} ".format(s))
                f.write("\n")
                for x in X:
                    f.write("{} ".format(x))
                f.write("\n")
            exit()
    print("Yey!")
