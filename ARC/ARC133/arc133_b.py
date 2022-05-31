from bisect import bisect_left
N = int(input())
P = list(map(int, input().split()))
Q = list(map(int, input().split()))

pos = [0] * (N+1)
for i in range(N):
    pos[Q[i]] = i

z = [float('inf')] * N
for i in P:
    ls = []
    for j in range(i, N+1, i):
        ls.append(pos[j])
    ls.sort(reverse=True)
    for j in ls:
        z[bisect_left(z, j)] = j
print(bisect_left(z, 10**9))
