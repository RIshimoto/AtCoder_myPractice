N, M = map(int, input().split())
graph = [[] for _ in range(N+1)]
for _ in range(M):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

def bfs(x, k):
    visited = set()
    visited.add(x)
    que = [(x, 0)]
    ans = 0
    for q, dst in que:
        ans += q
        if k == dst:
            continue
        for p in graph[q]:
            if p in visited:
                continue
            visited.add(p)
            que.append((p, dst+1))
    return ans
    
Q = int(input())
for _ in range(Q):
    x, k = map(int, input().split())
    ans = bfs(x, k)
    print(ans)
    
