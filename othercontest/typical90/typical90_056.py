N, S = map(int, input().split())
AB = [map(int, input().split()) for _ in range(N)]
A, B = [list(i) for i in zip(*AB)]

dp = [[False for _ in range(S+1)] for _ in range(N+1)]
dp[0][0] = True
for i in range(1, N+1):
    a, b = A[i-1], B[i-1]
    for j in range(S+1):
        if j - a >= 0 and dp[i-1][j-a] == True:
            dp[i][j] = True
        if j - b >= 0 and dp[i-1][j-b] == True:
            dp[i][j] = True
ans = ''
if dp[N][S] == False:
    ans = "Impossible"
else:
    j = S
    for i in range(N-1, -1, -1):
        if j - A[i] >= 0 and dp[i][j - A[i]] == True:
            ans = 'A' + ans
            j -= A[i]
        elif j - B[i] >= 0 and dp[i][j - B[i]] == True:
            ans = 'B' + ans
            j -= B[i]
print(ans)
