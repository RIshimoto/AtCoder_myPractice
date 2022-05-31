N, Q = map(int, input().split())
xyzw = [map(int, input().split()) for _ in range(Q)]
x, y, z, w = [list(i) for i in zip(*xyzw)]
MOD = 10**9+7

ans = 1
for bit in range(60):
    cnt = 0
    for i in range(1<<N):
        a = []
        for j in range(N):
            a.append((i >> j) & 1)

        ok = True
        for k in range(Q):
            if (a[x[k]-1] | a[y[k]-1] | a[z[k]-1]) != ((w[k] >> bit) & 1):
                ok = False
        if ok:
            cnt += 1
    ans *= cnt
print(ans % MOD)
