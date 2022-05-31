def random_generator():
    import random
    N = random.randint(1, 10)
    M = random.randint(1, 10)
    st = set()
    ab = []
    for _ in range(M):
        a = random.randint(1, N)
        b = random.randint(1, N)
        while (a, b) in st:
            a = random.randint(1, N)
            b = random.randint(1, N)
        st.add((a, b))
        ab.append((a, b))
    return N, M, ab

def solve_Jury(N, M, ab):
    ans = 0
    for i in range(1<<M):
        lst = []
        for j in range(M):
            if (i >> j) & 1:
                lst.append(ab[j])
        lst.sort()
        n = len(lst)
        ok = True
        for i in range(n-1):
            a1, b1 = lst[i]
            for j in range(i+1, n):
                a2, b2 = lst[j]
                if a1 >= a2 or b1 >= b2:
                    ok = False
        if ok:
            ans = max(ans, n)
    return ans


if __name__ == '__main__':
    from arc126_b import solve

    for t in range(100):
        N, M, ab = random_generator()
        J1 = solve(N, M, ab)
        J2 = solve_Jury(N, M, ab)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(N, M)
            for a, b in ab:
                print(a, b)
            with open("test#{}".format(t), mode="w") as f: 
                f.write("{} {}\n".format(N, M))
                for a, b in ab:
                    f.write("{} {}\n".format(a, b))
            exit()
    print("Yey!")
