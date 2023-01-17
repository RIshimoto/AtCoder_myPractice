def solve(N, M, A, B):
    dp = [[0 for _ in range(M+1)] for _ in range(N+1)]
    for i in range(N+1):
        dp[i][0] = i
    for i in range(M+1):
        dp[0][i] = i
    for i in range(N):
        for j in range(M):
            if A[i] == B[j]:
                dp[i+1][j+1] = dp[i][j]
            else:
                dp[i+1][j+1] = dp[i][j] + 1
            dp[i+1][j+1] = min(dp[i+1][j+1], dp[i+1][j]+1)
            dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j+1]+1)
    ans = dp[N][M]
    return ans

if __name__ == '__main__':
    N, M = map(int, input().split())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    ans = solve(N, M, A, B)
    print(ans)
