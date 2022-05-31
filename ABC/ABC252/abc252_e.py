def solve(V, E, stw):
    edges = []
    graph = [[] for _ in range(V)]
    for i in range(E):
        s, t, w = stw[i]
        s, t = s-1, t-1
        edges.append((w, s, t))
        graph[s].append((t, w, i))
        graph[t].append((s, w, i))

    dist = [float('inf')] * V
    dist[0] = 0
    que = [0]
    path = [-1] * V
    for q in que:
        for p, w, e in graph[q]:
            if dist[q] + w < dist[p]:
                dist[p] = dist[q] + w
                que.append(p)
                path[p] = e+1 
    ans = []
    for i in range(1, V):
        ans.append(path[i])
    return ans

if __name__ == '__main__':
    V, E = map(int, input().split())
    stw = [list(map(int, input().split())) for _ in range(E)]
    ans = solve(V, E, stw)
    print(*ans)
