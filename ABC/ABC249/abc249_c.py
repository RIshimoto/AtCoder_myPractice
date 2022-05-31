from collections import defaultdict
N, K = map(int, input().split())
S = [input() for _ in range(N)]
ans = 0
for i in range(1, 1<<N):
    dd = defaultdict(int)
    for j in range(N):
        if i & (1 << j):
            for s in S[j]:
                dd[s] += 1
    cnt = 0
    for v in dd.values():
        if v == K:
            cnt += 1
    ans = max(ans, cnt)
print(ans)
            
