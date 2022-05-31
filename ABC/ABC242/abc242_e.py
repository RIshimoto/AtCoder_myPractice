T = int(input())
MOD = 998244353

factorial_26 = []
r = 1
for _ in range(10**6+1):
    factorial_26.append(r) 
    r *= 26
    r %= MOD

for _ in range(T):
    N = int(input())
    S = input()
    minus = 0
    ans = 0
    half_N = (N + 1) // 2
    for i in range(half_N):
        ans += (ord(S[i]) - ord('A')) * factorial_26[half_N - i - 1]
        ans %= MOD
        if S[i] > S[N - 1 - i]:
            minus = 1
        if S[i] < S[N - 1 - i]:
            minus = 0
    ans += 1
    ans -= minus
    print(ans % MOD)
