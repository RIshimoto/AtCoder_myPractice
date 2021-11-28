from collections import deque

N, Q = map(int, input().split(' '))
prev_train = [-1] * (N + 1)
next_train = [-1] * (N + 1)
for _ in range(Q):
    c = list(map(int, input().split()))
    if c[0] == 1:
        x, y = c[1:]
        next_train[y] = x
        prev_train[x] = y 
    if c[0] == 2:
        x, y = c[1:]
        next_train[y] = -1
        prev_train[x] = -1
    if c[0] == 3:
        x = c[1]
        while next_train[x] != -1:
            x = next_train[x]
        ans = []
        while x != -1:
            ans .append(x)
            x = prev_train[x]
        ans = [len(ans)] + ans
        print(' '.join(map(str, ans)))
