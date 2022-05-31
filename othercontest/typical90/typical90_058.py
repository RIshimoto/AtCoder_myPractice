N, K = map(int, input().split())
MOD = 10 ** 5

vis = [-1] * MOD
ans = []
cnt = 0
x = N
while vis[x] == -1:
    vis[x] = cnt
    cnt += 1
    ans.append(x)
    x += sum(list(map(int, str(x))))
    x %= MOD
if K < vis[x]:
    k = K
else:
    k = (K - vis[x]) % (cnt - vis[x]) + vis[x]
print(ans[k])
