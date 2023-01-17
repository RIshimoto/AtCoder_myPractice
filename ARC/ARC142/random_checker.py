def random_generator():
    import random
    N = random.randint(1, 1000)
    K = random.randint(1, 1000)
    return N, K

def solve_Jury(N, K):
    def f(x):
        st = set()
        ret = x
        while x not in st:
            st.add(x)
            x = int(str(x)[::-1])
            ret = min(ret, x)
        return ret
    cnt = 0
    for x in range(1, N+1):
        if f(x) == K:
            cnt += 1
    return cnt

if __name__ == '__main__':
    from arc142_a import solve

    for t in range(1001):
        N, K = random_generator()
        J1 = solve(N, K)
        J2 = solve_Jury(N, K)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(N, K)
            with open("testcase", mode="w") as f: 
                f.write("{} {}\n".format(N, K))
            exit()
    print("Yey!")
