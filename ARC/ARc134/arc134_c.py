import math
N, K = map(int, input().split())
MOD = 998244353
a = list(map(int, input().split()))

if a[0] < K or a[0] - sum(a[1:N]) - K < 0:
    print(0)
    exit()

def H(n, r):
    return math.comb(n + r - 1, r)

ans = H(K, a[0] - sum(a[1:N]) - K) % MOD
for n in a[1:N]:
    ans *= H(K, n) % MOD
print(ans % MOD)
