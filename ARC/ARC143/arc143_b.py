from math import factorial

N = int(input())
MOD = 998244353

N2 = N ** 2
fac = [1] * (N2 + 1)
for n in range(1, N2+1):
    fac[n] = fac[n-1] * n
    fac[n] %= MOD

def calc(a, b):
    if b == 0:
        return 1
    if b % 2 == 0:
        d = calc(a, b//2)
        return (d * d) % MOD
    else:
        d = calc(a, b-1)
        return a * d % MOD

def comb(n, r):
    denom = fac[r] * fac[n - r] % MOD
    return fac[n] * calc(denom, MOD-2) % MOD

cnt = 0
for n in range(N, N2-N+2):
    cnt += , N-1) * fac[N-1] * comb(n-1, N-1) * fac[N-1] * fac[N2-(2*(N-1)+1)] * N2
    cnt %= MOD
ans = (fac[N2] - cnt) % MOD
print(ans)
