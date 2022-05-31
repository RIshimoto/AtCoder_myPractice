N, M = map(int, input().split())
S = list(map(int, input().split()))
T = list(map(int, input().split()))

if not set(T) <= set(S):
    print(-1)
    exit()

cost = float('inf')
target = 1 - S[0]
for i in range(N):
    if S[i] == target:
        cost = min(cost, min(i, N-i))

init = True
ans = M
prev = S[0]
for i in range(M):
    if prev != T[i]:
        if init:
            ans += cost
            init = False
        else:
            ans += 1 
        prev = T[i]
print(ans)
