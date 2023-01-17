def random_generator():
    return 1

def solve_Jury(N):
    cnt = 0
    for a in range(1, N+1):
        b = a * a
        for i in range(1, a+1): 
            if b % i == 0:
                if b // i <= N: 
                    cnt += 1
                    if i != a*a // i:
                        cnt += 1
                    print(i, b//i)
    return (cnt)

if __name__ == '__main__':
    from abc254_d import solve

    for t in range(1, 1001):
        N = random_generator()
        J1 = solve(t)
        J2 = solve_Jury(t)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(t)
            with open("testcase", mode="w") as f: 
                f.write("{}\n".format(t))
            exit()
    print("Yey!")
