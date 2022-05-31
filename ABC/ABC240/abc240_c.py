N, X = map(int, input().split())

dp = [[False for _ in range(X+1)] for _ in range(N+1)]
dp[0][0] = True
for i in range(N):
    a, b = map(int, input().split())
    for j in range(X+1):
        if dp[i][j] == True:
            if j + a <= X:
                dp[i+1][j+a] = dp[i][j]
            if j + b <= X:
                dp[i+1][j+b] = dp[i][j]
print("Yes" if dp[N][X]==True else "No")
