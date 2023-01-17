def solve(H, W, K, x1, y1, x2, y2):
    MOD = 998244353
    s1, s2, s3, s4 = 0, 0, 0, 0
    if x1 == x2:
        if y1 == y2:
            s4 += 1
        else:
            s2 += 1
    else:
        if y1 == y2:
            s3 += 1
        else:
            s1 += 1

    for _ in range(K):
        s1, s2, s3, s4 = (
            (H - 2 + W - 2) * s1 + (H - 1) * s2 + (W - 1) * s3,
                s1 + (W - 2) * s2 + (W - 1) * s4,
                    s1 + (H - 2) * s3 + (H - 1) * s4,
                        s2 + s3)
        s1 %= MOD
        s2 %= MOD
        s3 %= MOD
        s4 %= MOD
    return s4

if __name__ == '__main__':
    H, W, K = map(int, input().split())
    x1, y1, x2, y2 = map(int, input().split())
    ans = solve(H, W, K, x1, y1, x2, y2)
    print(ans)
