import sys
sys.setrecursionlimit(10**6)
A, B = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

dp = [[-1] * (B + 1) for _ in range(A+1)]
dp[0][0] = 0
def f(i, j, teban):
    if dp[i][j] != -1:
        return dp[i][j]
    if teban:
        v = 0
        if i > 0:
            v = max(v, f(i-1, j, False) + a[A-i])
        if j > 0:
            v = max(v, f(i, j-1, False) + b[B-j])
    else:
        v = float('inf')
        if i > 0:
            v = min(v, f(i-1, j, True))
        if j > 0:
            v = min(v, f(i, j-1, True))
    dp[i][j] = v
    return dp[i][j]

ans = f(A, B, True)
print(ans)
