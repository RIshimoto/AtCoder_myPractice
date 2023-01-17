def random_generator():
    import random
    N = random.randint(1, 5)
    dogs = []
    for _ in range(2*N):
        a = random.randint(1, 100)
        c = random.choice("RGB")
        dogs.append((a, c))
    return N, dogs

if __name__ == '__main__':
    from arc121_b import solve
    from solve_Jury import solve_Jury

    for t in range(1001):
        N, dogs = random_generator()
        J1 = solve(N, dogs)
        J2 = solve_Jury(N, dogs)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(N)
            for a, c in dogs:
                print(a, c)
            with open("testcase", mode="w") as f: 
                f.write("{}\n".format(N))
                for a, c in dogs:
                    f.write("{} {}\n".format(a, c))
            exit()
    print("Yey!")
