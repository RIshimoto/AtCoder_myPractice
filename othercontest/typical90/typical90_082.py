L, R = map(int, input().split())
MOD = 10**9+7

def f(l, r):
    n = (r - l) + 1
    return (l + r) * n // 2
'''
ans = 0
l = L
s = 10
keta = 1
while s <= R:
    if l < s:
        ans += keta * f(l, s-1)
        l = s
    s *= 10 
    keta += 1
ans += keta * f(l, R)
print(ans % MOD)
'''

l = 1
r = l * 10 - 1
ans = 0
for i in range(1, 20):
    vl = max(l, L)
    vr = min(r, R)
    l *= 10
    r = l * 10 - 1
    if vl > vr:
        continue
    ans += i * f(vl, vr) % MOD
print(ans % MOD)
