def random_generator():
    import random
    N = random.randint(1, 200)
    L = random.randint(-100, 100)
    R = random.randint(-100, 100)
    A = [random.randint(-100, 100)] * N
    return N, L, R, A

def solve_Jury(N, L, R, A):
    ans = sum(A)
    for x in range(N):
        A[x] = L
        B = A.copy()
        ans = min(ans, sum(B))
        for y in range(N-1, -1, -1):
            B[y] = R
            ans = min(ans, sum(B))
    return ans

if __name__ == '__main__':
    import sys
    from abc263_d import solve

    args = sys.argv
    if len(args) <= 1:
        for t in range(1001):
            N, L, R, A = random_generator()
            J1 = solve(N, L, R, A)
            J2 = solve_Jury(N, L, R, A)
            if J1 != J2:
                print("Wrong Answer on Test #", t)
                print("Jury = ", J2, ", Output = ", J1)
                print(N, L, R)
                print(*A)
                with open("testcase", mode="w") as f: 
                    f.write("{} {} {}\n".format(N, L, R))
                    for a in A:
                        f.write("{} ".format(a))
                    f.write("\n")
                exit()
        print("Yey!")
    elif args[1].lower() == "debug":
        N, L, R = map(int, input().split())
        A = list(map(int, input().split()))
        ans = solve_Jury(N, L, R, A)
        print(ans)
