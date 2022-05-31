import heapq
N, M = map(int, input().split())
ABC = [map(int, input().split()) for _ in range(M)]
A, B, C = [list(i) for i in zip(*ABC)]

graph = [[] for _ in range(N)]
for i in range(M):
    A[i], B[i] = A[i]-1, B[i]-1
    graph[A[i]].append((B[i], C[i]))
    graph[B[i]].append((A[i], C[i]))

def dijkstra(start):
    dist = [float('inf')] * N
    pq = [(0, start)]

    dist[start] = 0 
    heapq.heapify(pq)
    while len(pq) != 0:
        _, u = heapq.heappop(pq)
        for (v, cost) in graph[u]:
            if dist[u] + cost < dist[v]:
                dist[v] = dist[u] + cost
                heapq.heappush(pq, (dist[v], v))
    return dist

if __name__ == '__main__':
    dist1 = dijkstra(0)
    distN = dijkstra(N-1)
    for i in range(N):
        print(dist1[i] + distN[i])
