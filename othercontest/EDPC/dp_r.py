import sys
sys.setrecursionlimit(10**6)

N, K = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(N)]
MOD = 10**9+7

def mat_mul(a, b):
    I, J, K = len(a), len(b[0]), len(b)
    c = [[0] * J for _ in range(I)]
    for i in range(I) :
        for j in range(J) :
            for k in range(K) :
                c[i][j] += a[i][k] * b[k][j]
            c[i][j] %= MOD
    return c

def mat_pow(x, n):
    y = [[0] * len(x) for _ in range(len(x))]

    for i in range(len(x)):
        y[i][i] = 1

    while n > 0:
        if n & 1:
            y = mat_mul(x, y)
        x = mat_mul(x, x)
        n >>= 1
    return y

a = mat_pow(a, K)
ans = 0
for i in range(N):
    for j in range(N):
        ans += a[i][j] % MOD
        ans %= MOD
print(ans)
