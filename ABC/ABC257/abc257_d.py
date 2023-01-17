N = int(input())
xyP = [map(int, input().split()) for _ in range(N)]
x, y, P = [list(i) for i in zip(*xyP)]

def bfs(start, X):
    visited = [False] * N
    que = [start]
    for q in que:
        if visited[q] == True:
            continue
        visited[q] = True
        for p in range(N):
            if q == p:
                continue
            if P[q] * X >= abs(x[p] - x[q]) + abs(y[p] - y[q]):
                que.append(p)
    for i in range(N):
        if visited[i] == False:
            return False
    return True

ans = 0
left = 0
right = 4 * 10**9 + 1
while right - left > 1:
    X = (left + right) // 2
    ok = False
    for i in range(N):
        if bfs(i, X) == True:
            ok = True
            break
    if ok:
        right = X
    else:
        left = X
print(right)
