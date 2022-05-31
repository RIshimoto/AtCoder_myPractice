N = int(input())
graph = [[] for _ in range(N)]
for _ in range(N-1):
    x, y = map(int, input().split())
    x, y = x - 1, y - 1
    graph[x].append(y)
    graph[y].append(x)

def get_tree_diameter(start, end):
    visited = [-1 for _ in range(N)]

    que = [start]
    visited[start] = 0
    for q in que:
        if end == q:
            return visited[end]
        for p in graph[q]:
            if visited[p] != -1:
                continue
            visited[p] = visited[q] + 1
            que.append(p)

Q = int(input())
for _ in range(Q):
    a, b = map(int, input().split())
    a, b = a - 1, b - 1
    ans = get_tree_diameter(a, b)
    print(ans + 1)
