MOD = 998244353
A, B, C = map(int, input().split())
print((A + 1) * A * (B + 1) * B * (C + 1) * C // 8 % MOD)
