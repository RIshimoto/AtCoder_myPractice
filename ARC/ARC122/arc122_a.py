def solve(N, A):
    MOD = 10**9+7
    if N < 2:
        return A[0]
    cnt = [[0 for _ in range(2)] for _ in range(N)] 
    cnt[1][0] = cnt[1][1] = 1
    for i in range(1, N-1):
        cnt[i+1][0] += cnt[i][0] + cnt[i][1]
        cnt[i+1][1] += cnt[i][0]

    dp = [[0 for _ in range(2)] for _ in range(N)] 
    dp[1][0] = A[0] + A[1]
    dp[1][1] = A[0] - A[1]
    for i in range(1, N-1):
        dp[i+1][0] += dp[i][0] + cnt[i][0] * A[i+1]
        dp[i+1][0] += dp[i][1] + cnt[i][1] * A[i+1]
        dp[i+1][1] += dp[i][0] - cnt[i][0] * A[i+1]
    ans = (dp[N-1][0] + dp[N-1][1]) %  MOD
    return ans

if __name__ == '__main__':
    N = int(input())
    A = list(map(int, input().split()))
    ans = solve(N, A)
    print(ans)
