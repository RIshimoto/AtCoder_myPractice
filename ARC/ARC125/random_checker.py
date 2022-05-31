def random_generator():
    import random
    N = random.randint(1, 100)
    return N

def solve_Jury(N):
    MOD = 998244353
    ans = 0
    for x in range(1, N+1):
        for y in range(1, N+1):
            if x ** 2 - y >= 0:
                sq = int((x ** 2 - y) ** 0.5)
                if sq * sq == x ** 2 - y:
                    ans += 1
    return ans

if __name__ == '__main__':
    from arc125_b import solve

    for t in range(1001):
        N = random_generator()
        J1 = solve(N)
        J2 = solve_Jury(N)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(N)
            with open("Test#{}".format(t), mode="w") as f: 
                f.write("{}\n".format(N))
            exit()
    print("Yey!")
