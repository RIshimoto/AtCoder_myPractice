N, L, R = map(int, input().split())

ans = 0
n = len(bin(N)) - 2
for i in range(n+1):
    if (N >> i) & 1:
        x = pow(2, i)
        ans += max(0, min(x * 2 - 1, R) - max(x, L) + 1)
print(ans)
