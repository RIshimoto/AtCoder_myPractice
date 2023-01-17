def random_generator():
    import random
    N = random.randint(1, 10)
    M = random.randint(1, 10)
    A = []
    for _ in range(N):
        a = random.randint(1, 10000)
        A.append(a)
    B = []
    for _ in range(M):
        b = random.randint(1, 10000)
        B.append(a)
    return N, M, A, B

def solve_Jury(N, M, A, B):
    from itertools import combinations
    mn = min(N, M)
    ans = float('inf')
    # s:取り除いた数
    for s in range(mn+1): 
        x = (N - s) + (M - s)
        for A_ in combinations(A, s):
            for B_ in combinations(B, s):
                y = 0
                for i in range(s):
                    if A_[i] != B_[i]:
                        y += 1
                ans = min(ans, x + y)
    return ans

if __name__ == '__main__':
    from abc185_e import solve

    for t in range(1000):
        N, M, A, B = random_generator()
        J1 = solve(N, M, A, B)
        J2 = solve_Jury(N, M, A, B)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(N, M)
            print(*A)
            print(*B)
            with open("testcase", mode="w") as f: 
                f.write("{} {}\n".format(N, M))
                for a in A:
                    f.write("{} ".format(a))
                f.write("\n")
                for b in B:
                    f.write("{} ".format(b))
                f.write("\n")
            exit()
    print("Yey!")
