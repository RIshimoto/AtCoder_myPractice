N, M = map(int, input().split())
timelimit = [[0] * N for _ in range(N)]
dist = [[float('inf')] * N for _ in range(N)]
for _ in range(M):
    s, t, d, tm = map(int, input().split())
    s, t = s-1, t-1
    dist[s][t] = d
    dist[t][s] = d
    timelimit[s][t] = tm
    timelimit[t][s] = tm

dp = [[0] * N for _ in range(1<<N)]
dp[1][0] = 1
time = [[float('inf')] * N for _ in range(1<<N)]
time[1][0] = 0
for S in range(1, 1<<N):
    for s in range(N):
        if (S != 1 and s == 0) or (S & (1 << s)) == 0:
            continue
        for t in range(1, N):
            if (S & (1 << t)) != 0:
                continue
            if time[S][s] + dist[s][t] <= timelimit[s][t]: 
                if time[S][s] + dist[s][t] < time[S|(1<<t)][t]:
                    time[S|(1<<t)][t] = time[S][s] + dist[s][t]
                    dp[S|(1<<t)][t] = dp[S][s]
                elif time[S][s] + dist[s][t] == time[S|(1<<t)][t]:
                    dp[S|(1<<t)][t] += dp[S][s]
S = (1<<N)-1
ans_dist = 0
ans_time = float('inf')
for s in range(1, N):
    if time[S][s] + dist[s][0] <= timelimit[s][0]:
        if time[S][s] + dist[s][0] < ans_time:
            ans_time = time[S][s] + dist[s][0]
            ans_dist = dp[S][s]
        elif time[S][s] + dist[s][0] == ans_time:
            ans_dist += dp[S][s]
if ans_time == float('inf'):
    print("IMPOSSIBLE")
else:
    print(ans_time, ans_dist)
