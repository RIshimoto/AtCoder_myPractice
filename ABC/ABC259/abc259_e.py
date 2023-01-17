from collections import defaultdict
N = int(input())
pss = []
p_max = defaultdict(lambda: 0)
p_max_cnt = defaultdict(lambda: 0)
for _ in range(N):
    m = int(input())
    ps = []
    for _ in range(m):
        p, e = map(int, input().split())
        ps.append((p, e))
        if p_max[p] <= e:
            if p_max[p] < e:
                p_max_cnt[p] = 0
            p_max[p] = e 
            p_max_cnt[p] += 1

        p_max[p] = max(p_max[p], e)
    pss.append(ps)

cnt = 0
for i in range(N):
    ok = False
    for ps in pss[i]:
        p, e = ps
        if p_max[p] == e and p_max_cnt[p] == 1:
            ok = True
    if ok == False:
        cnt += 1

ans = N - cnt
if cnt > 0:
    ans += 1
print(ans)
