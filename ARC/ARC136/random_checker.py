def random_generator():
    import random
    N = random.randint(3, 1000)
    A = []
    for _ in range(N):
        A.append(random.randint(0, 10))
    B = A.copy()
    for _ in range(random.randint(1, 10)):
        r = random.randint(0, N-3)
        x, y, z = B[r], B[r+1], B[r+2]
        B[r], B[r+1], B[r+2] = z, x, y
    return N, A, B

def solve_Jury(N, A, B):
    return "Yes"

if __name__ == '__main__':
    from arc136_b import solve

    for t in range(1000):
        N, A, B = random_generator()
        J1 = solve(N, A, B)
        J2 = solve_Jury(N, A, B)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(N)
            print(A)
            print(B)
            exit()
    print("Yey!")
