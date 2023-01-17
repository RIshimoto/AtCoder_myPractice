def random_generator():
    import random
    N = random.randint(1, 10)
    a = [random.randint(1, 10) for _ in range(N)]
    return N, a

def solve_Jury(N, A):
    MOD = 10**9+7
    ans = 0
    for i in range(1<<(N-1)):
        ok = True
        minus = False
        sum = A[0]
        for j in range(N-1):
            if (i >> j) & 1 == 1:
                sum -= A[j+1]
                if minus == True:
                    ok = False
                minus = True
            else:
                sum += A[j+1]
                minus = False
        if ok:
            ans += sum
    return ans % MOD



if __name__ == '__main__':
    from arc122_a import solve

    for t in range(1001):
        N, a = random_generator()
        J1 = solve(N, a)
        J2 = solve_Jury(N, a)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(N)
            print(*a)
            with open("testcase.txt", mode="w") as f: 
                f.write("{}\n".format(N))
                for i in range(N):
                    f.write("{}".format(a[i]))
                    if i < N-1:
                        f.write(" ")
                    else:
                        f.write("\n")
            exit()
    print("Yey!")
