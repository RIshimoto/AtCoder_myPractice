def random_generator():
    import random
    N = random.randint(1, 10)
    K = random.randint(1, N)
    P = list(range(1, N+1))
    random.shuffle(P)
    return N, K, P

def solve_Jury(N, K, P):
    yamafudas = [[float('inf')] for _ in range(N)]
    ans = [-1] * (N + 1)
    for turn, X in enumerate(P, 1):
        for yamafuda in yamafudas:
            if X <= yamafuda[-1] and len(yamafuda) - 1 < K:
                yamafuda.append(X)
                if len(yamafuda) - 1 == K:
                    for x in yamafuda[1:]:
                        ans[x] = turn
                break
    return ans[1:]

if __name__ == '__main__':
    from abc260_d import solve

    for t in range(1001):
        N, K, P = random_generator()
        J1 = solve(N, K, P)
        J2 = solve_Jury(N, K, P)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(N, K)
            print(*P)
            with open("testcase", mode="w") as f: 
                f.write("{} {}\n".format(N, K))
                for p in P:
                    f.write("{} ".format(p))
                f.write("\n")
            exit()
    print("Yey!")
