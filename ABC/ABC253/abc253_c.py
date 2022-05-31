from collections import defaultdict
import heapq

Q = int(input())
cnt = defaultdict(lambda: 0)
MIN = []
MAX = []
for _ in range(Q):
    query = list(map(int, input().split()))
    if query[0] == 1:
        x = query[1]
        cnt[x] += 1
        heapq.heappush(MIN, x)
        heapq.heappush(MAX, -x)
    elif query[0] == 2:
        x, c = query[1], query[2]
        cnt[x] -= c
    elif query[0] == 3:
        while cnt[MIN[0]] <= 0:
            heapq.heappop(MIN)
        mn = MIN[0]

        while cnt[-MAX[0]] <= 0:
            heapq.heappop(MAX)
        mx = -MAX[0]
        print(mx - mn)
