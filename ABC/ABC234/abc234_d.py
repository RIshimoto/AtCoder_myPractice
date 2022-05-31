import heapq
N, K = map(int, input().split())
P = list(map(int, input().split()))

q = P[:K]
heapq.heapify(q)
for i in range(K, N):
    x = heapq.heappop(q)
    print(x)
    heapq.heappush(q, max(x, P[i]))

x = heapq.heappop(q)
print(x)
