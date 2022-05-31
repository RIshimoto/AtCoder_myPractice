N = int(input())
MOD = 998244353

def f(n, m):
    l = m - n + 1
    return (l + 1) * l // 2

l = 1
r = l * 10 - 1
ans = 0
while l <= N:
    ans += f(l, min(r, N))
    l *= 10
    r = l * 10 - 1
print(ans % MOD)
