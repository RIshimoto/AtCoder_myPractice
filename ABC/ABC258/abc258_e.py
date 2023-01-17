import bisect
N, Q, X = map(int, input().split())
W = list(map(int, input().split()))

sum2W = [0] * (2 * N + 1)
for i in range(1, 2*N+1):
    sum2W[i] = sum2W[i-1] + W[(i-1)%N]

sumW = sum(W) 
boxes = [X // sumW * N] * N
for i in range(N):
    j = bisect.bisect_left(sum2W, X % sumW + sum2W[i])
    boxes[i] += j - i

seen = [-1] * N
g = []
cnt = 0
i = 0
while seen[i] == -1:
    seen[i] = cnt
    cnt += 1
    g.append(boxes[i])
    i = (i + boxes[i]) % N

r = seen[i]
l = cnt - seen[i]
for _ in range(Q):
    k = int(input())
    if k - r > 0:
        if (k - r) % l == 0:
            k = r + l
        else:
            k = r + (k - r) % l
    ans = g[k-1]
    print(ans)
