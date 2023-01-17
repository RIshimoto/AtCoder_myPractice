def random_generator():
    import random
    N = random.randint(1, 8)
    a = []
    b = []
    for _ in range(N):
        a.append(random.randint(0, 10))
        b.append(random.randint(0, 10))
    return N, a, b

def solve_Jury(N, a, b):
    from itertools import permutations

    ans = []
    for p in permutations(b, N):
        ok = True  
        prev = -1
        for i, v in enumerate(p):
            if prev == -1 or a[i] ^ v == prev:
                prev = a[i] ^ v
            else:
                ok = False
        if ok:
            ans.append(prev)
    ans.sort()
    ans = [len(ans)] + ans
    return ans


if __name__ == '__main__':
    from arc124_b import solve

    for t in range(1000):
        N, a, b = random_generator()
        J1 = solve(N, a, b)
        J2 = solve_Jury(N, a, b)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(N)
            print(*a)
            print(*b)
            with open("Test#{}".format(t), mode="w") as f: 
                f.write("{}\n".format(N))
                f.write("{}\n".format(*b))
                f.write("{}\n".format(*b))
            exit()
    print("Yey!")
