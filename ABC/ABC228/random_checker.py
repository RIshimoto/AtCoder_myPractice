def random_generator():
    import random
    Q = random.randint(1, 10)
    t = []
    x = []
    for _ in range(Q):
        t.append(random.randint(1, 2))
        x.append(random.randint(1, 100))
    return Q, t, x

def solve_Jury(Q, t, x):
    N = 2**30
    A = [-1] * N
    ans = []
    for i in range(Q): 
        if t[i] == 1:
            h = x[i] % N
            while A[h] != -1:
                h = (h + 1) % N
            A[h] = x[i]
        elif t[i] == 2:
            h = x[i] % N
            ans.append(A[h])
    return ans

if __name__ == '__main__':
    from abc228_d import solve

    for t in range(1001):
        Q, t, x = random_generator()
        J1 = solve(Q, t, x)
        J2 = solve_Jury(Q, t, x)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(Q)
            [print(a, b) for a, b in zip(t, x)]
            exit()
    print("Yey!")
