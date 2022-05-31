def random_generator():
    import random
    N = random.randint(2, 10)
    X = random.randint(1, N)
    return N, X

def solve_Jury(N, X):
    from itertools import permutations
    ok = None
    ans = 0
    for p in permutations(range(1, N+1), N):
        if p[0] != X:
            continue
        mx = result(p)
        if ans < mx:
            ans = mx
            ok = list(p)
    return ok

def result(p):
    mx = 0
    prev = 0
    cnt = 0
    for i in range(len(p)-1):
        if prev >= abs(p[i]-p[i+1]):
            cnt = 0
        cnt += 1
        prev = abs(p[i]-p[i+1])
        mx = max(cnt, mx)
    return mx

if __name__ == '__main__':
    from arc140_c import solve

    for t in range(1001):
        N, X = random_generator()
        J1 = solve(N, X)
        J2 = solve_Jury(N, X)
        J1_result = result(J1)
        J2_result = result(J2)
        if J1_result != J2_result:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print("Jury Result = ", J2_result, ", Output Result = ", J1_result)
            print(N, X)
            exit()
    print("Yey!")
