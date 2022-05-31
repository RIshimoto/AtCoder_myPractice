def solve(N, M):
    from collections import defaultdict
    MOD = 998244353

    if N > 60:
        return 0

    keta = defaultdict(lambda:0)
    i = 0
    while (1 << (i+1)) <= M:
        keta[i+1] = 2**i
        i+=1
    keta[i+1] = M-(1 << i)+1

    dp = [[0 for _ in range(61)] for _ in range(N)]
    for i in range(61):
        dp[0][i] = keta[i]
    for i in range(N-1):
        for j in range(61):
            for k in range(j+1, 61):
                dp[i+1][k] += dp[i][j] * keta[k]
                dp[i+1][k] %= MOD

    msb = 0
    for i in range(61):
        if (M >> i) & 1 == 1:
            msb = max(msb, i+1)
    ans = sum(dp[N-1][1:msb+1]) % MOD
    return ans
        
if __name__ == '__main__':
    N, M = map(int, input().split())
    ans = solve(N, M)
    print(ans)
