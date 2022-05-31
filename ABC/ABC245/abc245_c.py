N, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

dp = [[False] * 2 for _ in range(N)]
dp[0][0] = dp[0][1] = True
for i in range(N-1):
    for j, X in enumerate([A, B]):
        if dp[i][j] == False:
            continue
        if abs(A[i+1] - X[i]) <= K:
            dp[i+1][0] = True
        if abs(B[i+1] - X[i]) <= K:
            dp[i+1][1] = True

if dp[N-1][0] | dp[N-1][1]:
    print("Yes")
else:
    print("No")
