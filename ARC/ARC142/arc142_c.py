import heapq
N = int(input())

def question(u, v):
    print("? {} {}".format(u, v))
    d = int(input())
    if d == -1:
        exit()
    return d

direct = False
for v in range(3, N+1):
    d = question(1, v)
    if d == 1:
        direct = True

seen = set()
dist = [float('inf')] * (N + 1)
dist[1] = 0
pq = [(0, 1)]
heapq.heapify(pq)
while len(pq) != 0:
    cost, u = heapq.heappop(pq)
    seen.add(u)
    if u == 2: 
        break
    for v in range(1, N+1):
        if u != v and u + v > 3 and v not in seen:
            d = question(u, v)
            if dist[u] + d  < dist[v]:
                dist[v] = dist[u] + d
                heapq.heappush(pq, (dist[v], v))
print("! {}".format(dist[2]))
