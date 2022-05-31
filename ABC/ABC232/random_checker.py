def random_generator():
    import random
    H = random.randint(2, 5)
    W = random.randint(2, 5)
    K = random.randint(1, 10)
    x1 = random.randint(1, H)
    x2 = random.randint(1, H)
    y1 = random.randint(1, W)
    y2 = random.randint(1, W)
    return H, W, K, x1, y1, x2, y2


def solve_Jury(H, W, K, x1, y1, x2, y2):
    MOD = 998244353
    cnt = 0
    que = [(x1, y1, 0)]
    for q in que:
        x, y, k = q
        if k == K and (x, y) == (x2, y2):
            cnt += 1
        if k > K:
            continue
        for nx in range(x+1, H+1): 
            que.append((nx, y, k+1))
        for nx in range(x-1, 0, -1): 
            que.append((nx, y, k+1))
        for ny in range(y+1, W+1):
            que.append((x, ny, k+1))
        for ny in range(y-1, 0, -1):
            que.append((x, ny, k+1))
    return cnt % MOD

if __name__ == '__main__':
    from abc232_e import solve

    for t in range(1001):
        H, W, K, x1, y1, x2, y2 = random_generator()

        H, W, K = map(int, input().split())
        x1, y1, x2, y2 = map(int, input().split())
        J1 = solve(H, W, K, x1, y1, x2, y2)
        J2 = solve_Jury(H, W, K, x1, y1, x2, y2)
        if J1 != J2:
            print("Wrong Answer on Test #", t)
            print("Jury = ", J2, ", Output = ", J1)
            print(H, W, K)
            print(x1, y1, x2, y2)
            with open("Test#{}".format(t), mode="w") as f: 
                f.write("{} {} {}\n".format(H, W, K))
                f.write("{} {} {} {}\n".format(x1, y1, x2, y2))
            exit()
    print("Yey!")
