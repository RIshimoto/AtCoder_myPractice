from collections import deque
N, X = map(int, input().split())
S = input()

que = deque([-1])
for s in S:
    if (que[-1] == 'L' or que[-1] == 'R') and s == 'U':
        que.pop()
    else:
        que.append(s)
que.popleft()

for q in que:
    if q == 'U':
        X = X // 2
    if q == 'L':
        X = X * 2
    if q == 'R':
        X = X * 2 + 1
print(X)
