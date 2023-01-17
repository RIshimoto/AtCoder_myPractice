def random_generator():
    import random
    L = random.randint(1, 100)
    k = L
    A = []
    while k > 0:
        x = random.randint(1, k)
        A.append(x)
        k -= x
    return len(A), L, A

def solve_Jury(N, L, A):
    return -1

if __name__ == '__main__':
    from abc252_f import solve

    for t in range(1001):
        N, L, A = random_generator()
        J1 = solve(N, L, A)
        J2 = solve_Jury(N, L, A)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(N, L)
            print(*A)
            with open("testcase", mode="w") as f: 
                f.write("{} {}\n".format(N, L))
                f.write("{}\n".format(*A))
            exit()
    print("Yey!")
