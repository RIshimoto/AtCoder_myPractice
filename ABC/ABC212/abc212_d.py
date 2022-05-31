import heapq

heap = []
sum = 0
Q = int(input())
for _ in range(Q):
    x = list(map(int, input().split()))
    if x[0] == 1:
        heapq.heappush(heap, x[1] + sum)
    elif x[0] == 2:
        sum -= x[1]
    elif x[0] == 3:
        mn = heapq.heappop(heap) - sum
        print(mn)
