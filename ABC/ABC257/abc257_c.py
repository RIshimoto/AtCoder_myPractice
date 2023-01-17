N = int(input())
S = input()
W = list(map(int, input().split()))


A = [[W[i], int(S[i])] for i in range(N)]
A.sort()
W.sort()

cnt = [0] * (N + 1)
for i in range(N):
    cnt[i+1] += cnt[i] + A[i][1]

ans = cnt[N]
for i in range(N+1):
    adult = cnt[N] - cnt[i]
    child = i - cnt[i]
    ans = max(ans, adult + child)
print(ans)
