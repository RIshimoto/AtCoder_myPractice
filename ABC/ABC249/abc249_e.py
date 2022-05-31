N, P = map(int, input().split())

def solve():
    dp = [[0] * 4100 for _ in range(3100)]
    dp[0][0] = 1
    dp[0][1] = -1
    for i in range(N):
        for j in range(N + 1):
            dp[i][j] += dp[i][j - 1]
            dp[i][j] %= P
        c = 26 if i == 0 else 25
        for j in range(N + 1):
            x = dp[i][j]
            dp[i + 2][j + 1] += c * x
            dp[i + 2][j + 10] -= c * x
            dp[i + 3][j + 10] += c * x
            dp[i + 3][j + 100] -= c * x
            dp[i + 4][j + 100] += c * x
            dp[i + 4][j + 1000] -= c * x
            dp[i + 5][j + 1000] += c * x
    ans = 0
    for i in range(N):
        ans += dp[i][N]
        ans %= P
    return ans

print(solve())
