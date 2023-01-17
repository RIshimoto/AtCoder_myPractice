N, K, M = map(int, input().split())
MOD = 998244353

if M % MOD == 0:
    print(0)
else:
    def calc(a, b, p):
        if b == 0: 
            return 1
        if b % 2 == 0:
            d = calc(a, b // 2, p)
            return (d * d) % p
        else:
            return a * calc(a, b - 1, p) % p

    r = calc(K, N, MOD-1)
    ans = calc(M, r, MOD)
    print(ans)
