def random_generator():
    import random
    N = random.randint(0, 10)
    N = 3
    return N

def solve_Jury(N):
    from itertools import permutations
    from collections import defaultdict
    tab = [[0 for _ in range(N)] for _ in range(N)]
    dd = defaultdict(lambda:0)
    cnt = 0
    for l in permutations(range(1, N**2+1)):
        i = -1
        j = 0
        for p, r in enumerate(l):
            if p % N == 0:
                i += 1
                j = 0
            tab[i][j] = r
            j += 1

        ok = False
        for i in range(N):
            for j in range(N):
                n = tab[i][j]

                is_ok_a = True
                # 列
                for k in range(N):
                    if k == i:
                        continue
                    if tab[k][j] > n:
                        is_ok_a = False

                # 行
                is_ok_b = True
                for l in range(N):
                    if l == j:
                        continue
                    if tab[i][l] < n:
                        is_ok_b = False

                if is_ok_a and is_ok_b:
                    ok = True
        if ok == True:
            cnt += 1
            dd[tab[0][0]] += 1
    print(cnt)
    print(dd)
    return N**2 - cnt


if __name__ == '__main__':
    from arc143_b import solve

    for t in range(1001):
        N = random_generator()
        J1 = solve(N)
        J2 = solve_Jury(N)
        print(J2)
        exit()
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(N)
            with open("testcase", mode="w") as f: 
                f.write("{} \n".format(N))
            exit()
    print("Yey!")
