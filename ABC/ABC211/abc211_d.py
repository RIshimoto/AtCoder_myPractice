from collections import deque

MOD = 1000000007
N, M = map(int, input().split())
node = [[] for _ in range(N)]
for i in range(M):
    A, B = map(int, input().split())
    A -= 1
    B -= 1
    node[A].append(B)
    node[B].append(A)

d = [float('inf')] * N
cnt = [0] * N
d[0] = 0
cnt[0] = 1
que = [0]
for v in que:
    for u in node[v]:
        if d[u] > d[v] + 1:
            d[u] = d[v] + 1
            que.append(u)
            cnt[u] = cnt[v]
        elif d[u] == d[v] + 1:
            cnt[u] += cnt[v]
            cnt[u] %= MOD
print(cnt[N - 1])

