T = int(input())

for _ in range(T):
    L, R = map(int, input().split())
    x = 1
    while x * 10 <= R:
        x *= 10
    ans = 0
    if x < L:
        ans += R - L + 1
    else:
        ans += R - x
        out_bound = R - x + 1
        if x > out_bound:
            if out_bound < R // 10 + 1:
                out_bound = R // 10 + 1
            ans += x - max(L, out_bound) + 1
        else:
            ans += 1
    print(ans)
