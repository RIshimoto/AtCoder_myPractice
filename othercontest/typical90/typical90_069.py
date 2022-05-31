N, K = map(int, input().split())
MOD = 10 ** 9 + 7
ans = 1
if N >= 1:
    ans *= K % MOD 
if N >= 2:
    ans *= (K - 1) % MOD
if N >= 3:
    ans *= pow(K - 2, N - 2, MOD) % MOD
ans %= MOD
print(ans)

def binpower(a, b):
    ans = 1
    while b != 0:
        if b % 2 == 1:
            ans = ans * a % MOD
        a = a * a % MOD
        b /= 2
    return ans
