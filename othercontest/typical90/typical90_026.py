N = int(input())

graph = [[] for _ in range(N)]
for _ in range(N-1):
    A, B = map(int, input().split())
    A, B = A - 1, B - 1
    graph[A].append(B)
    graph[B].append(A)

WHITE = 0
BLACK = 1

color = WHITE
queue = [0]
colors = [-1] * N
for q in queue:
    for p in graph[q]:
        if colors[p] != -1:
            continue
        colors[p] = 1 - colors[q]
        queue.append(p)

color = WHITE if colors.count(WHITE) >= N / 2 else BLACK
cnt = 0
for i in range(N):
    if colors[i] == color and cnt < N / 2:
        print(i+1, end=' ')
        cnt += 1
print()
