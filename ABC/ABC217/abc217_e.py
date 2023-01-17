import heapq
from collections import deque
Q = int(input())

Q1 = deque()
Q2 = []
for _ in range(Q):
    line = list(map(int, input().split()))
    if line[0] == 1:
        x = line[1]
        Q1.append(x)
    elif line[0] == 2:
        if len(Q2) == 0:
            print(Q1.popleft())
        else:
            print(heapq.heappop(Q2))
    elif line[0] == 3:
        while len(Q1) != 0:
            heapq.heappush(Q2, Q1.pop())
