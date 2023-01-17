import sys
sys.setrecursionlimit(10**6)
N = int(input())
A = [int(input()) for _ in range(N)]

dp = [[-1] * N for _ in range(N)]
def f(i, j, teban):
    if dp[i][j] != -1:
        return dp[i][j]

    if i == j:
        if teban:
            dp[i][j] = A[i]
            return dp[i][j]
        return 0

    if teban:
        dp[i][j] = max(f((i+1)%N, j, False) + A[i], f(i, (j-1+N)%N, False) + A[j])
    else:
        if A[i] > A[j]:
            dp[i][j] = f((i+1)%N, j, True)
        else:
            dp[i][j] = f(i, (j-1+N)%N, True)
    return dp[i][j]

ans = 0
for i in range(N): 
    ans = max(ans, A[i] + f((i+1)%N, (i-1+N)%N, False))
print(ans)
