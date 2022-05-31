def random_generator():
    import random
    N = random.randint(2, 10)
    M = random.randint(1, 10)
    K = random.randint(0, M-1)
    K = 0
    return N, M, K

def solve_Jury(N, M, K):
    from itertools import product
    MOD = 998244353
    lst = []
    for i in range(N):
        lst.append(range(1, M+1))
    cnt = 0
    for a in product(*lst):
        ok = True
        for i in range(N-1):
            if abs(a[i]-a[i+1]) < K:
                ok = False
                break
        if ok:
            cnt += 1
    return cnt % MOD

if __name__ == '__main__':
    from abc253_e import solve

    for t in range(1001):
        N, M, K = random_generator()
        J1 = solve(N, M, K)
        J2 = solve_Jury(N, M, K)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print("N=", N, ", M=", M, ", K=", K)
            with open("Test#{}".format(t), mode="a") as f:
                f.write("{} {} {}".format(N, M, K))
            exit()
    print("Yey!")
