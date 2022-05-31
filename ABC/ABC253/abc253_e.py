def solve(N, M, K):
    MOD = 998244353

    dp = [[0 for _ in range(M+2)] for _ in range(N)]
    dp[0][0] = 1
    for i in range(N-1):
        for j in range(M+1):
            dp[i][j+1] += dp[i][j]
            dp[i][j+1] %= MOD

        for j in range(1, M+1):
            dp[i+1][M+1] -= dp[i][j]
            dp[i+1][0] += dp[i][j]
            if K != 0:
                dp[i+1][min(j+K, M+1)] += dp[i][j]
                dp[i+1][max(j-K+1, 0)] -= dp[i][j]

    for j in range(M+1):
        dp[N-1][j+1] += dp[N-1][j]
        dp[N-1][j] %= MOD
    
    ans = sum(dp[N-1][1:M+1]) % MOD
    return ans

if __name__ == '__main__':
    N, M, K = map(int, input().split())
    ans = solve(N, M, K)
    print(ans)

