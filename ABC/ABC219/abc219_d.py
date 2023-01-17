def solve(N, X, Y, A, B):
    dp = [[[float('inf')] * (Y+1) for _ in range(X+1)] for _ in range(N+1)]
    dp[0][0][0] = 0
    for i in range(1, N+1):
        for j in range(X+1):
            for k in range(Y+1):
                dp[i][min(j + A[i-1], X)][min(k + B[i-1], Y)] = min(\
                dp[i][min(j + A[i-1], X)][min(k + B[i-1], Y)],\
                dp[i-1][j][k] + 1)

                dp[i][j][k] = min(dp[i][j][k], dp[i-1][j][k])
                
    if dp[N][X][Y] == float('inf'):
        return -1
    return dp[N][X][Y]

if __name__ == '__main__':
    N = int(input())
    X, Y = map(int, input().split())
    AB = [map(int, input().split()) for _ in range(N)]
    A, B = [list(i) for i in zip(*AB)]
    ans = solve(N, X, Y, A, B)
    print(ans)
