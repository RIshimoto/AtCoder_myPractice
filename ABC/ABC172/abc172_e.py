from scipy.special import perm as P
from scipy.special import comb as C
N, M = map(int, input().split())
MOD = 10**9+7

sub = 0
for i in range(1, N+1):
    if i % 2 == 1:
        sub += C(N, i, exact=True) %MOD * P(M-i, N-i, exact=True) %MOD
    else:
        sub -= C(N, i, exact=True) %MOD * P(M-i, N-i, exact=True) %MOD 
    sub %= MOD
print(sub)
print(P(M, N, exact=True) %MOD * (P(M, N, exact=True) %MOD - sub) % MOD)
