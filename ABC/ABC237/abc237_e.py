import heapq

def solve(N, M, H):
    to = [[] for _ in range(N)]
    for _ in range(M):
        U, V = map(int, input().split())
        U, V = U-1, V-1
        to[U].append(V)
        to[V].append(U)

    dist = [float('inf')] * N
    dist[0] = 0
    pq = [(0, 0)]
    heapq.heapify(pq)
    while len(pq) != 0:
        d, v = heapq.heappop(pq)
        if dist[v] != d:
            continue
        for u in to[v]:
            cost = max(0, H[u] - H[v])
            if dist[u] <= cost + d:
                continue
            dist[u] = cost + d
            heapq.heappush(pq, (cost+d, u))

    ans = 0
    for i in range(N):
        now = H[0] - H[i] - dist[i]
        ans = max(ans, now)
    return ans

if __name__ == '__main__':
    N, M = map(int, input().split())
    H = list(map(int, input().split()))
    ans = solve(N, M, H)
    print(ans)
