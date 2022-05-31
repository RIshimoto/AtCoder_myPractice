def random_generator():
    import random
    N = random.randint(1, 60)
    M = random.randint(1, 100)
    return N, M

def solve_Jury(N, M):
    def dfs(a, b, n):
        if n >= N:
            return 1
        cnt = 0
        for m in range(a+1, M+1):
            if b < b^m:
                cnt += dfs(m, b^m, n+1)
        return cnt
    return dfs(0, 0, 0)

if __name__ == '__main__':
    from arc141_b import solve

    for t in range(1000):
        N, M = random_generator()
        J1 = solve(N, M)
        J2 = solve_Jury(N, M)
        print(N, M, J2)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(N, M)
            with open("Test#{}".format(t), mode="w") as f: 
                f.write("{} {}\n".format(N, M))
            exit()
    print("Yey!")
