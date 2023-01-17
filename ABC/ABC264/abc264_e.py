from collections import deque
N, M, E = map(int, input().split())
edge = [tuple(map(int, input().split())) for _ in range(E)]
Q = int(input())
X = [int(input()) for _ in range(Q)]

graph = [[] for _ in range(N+M)]
for i, (U, V) in enumerate(edge, 1):
    if i not in X:
        U, V = U-1, V-1
        graph[U].append(V)
        graph[V].append(U)

light = [False] * N
que = []
for i in range(N, N+M):
    que.append(i)
for q in que:
    for p in graph[q]:
        if p >= N or light[p] == True:
            continue
        light[p] = True
        que.append(p)

anses = deque()
ans = sum([1 for l in light if l == True else 0])
for x in reversed(X):
    anses.appendleft(ans)
    x -= 1
    U, V = edge[x]
    U, V = U-1, V-1
    graph[U].append(V)
    graph[V].append(U)
    if V < N:
        if light[U] == False and light[V] == True:
            light[U] = True
            ans += 1
        elif light[V] == True and light[V] == False:
            light[V] = True
            ans += 1
    elif U < N:
        if light[U] == False:
            light[U] = True
            ans += 1
            for u in graph[U]:
                if u < N:
                    light[u] = True
                    ans += 1
print(*anses)
