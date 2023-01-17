from collections import defaultdict
S = input()

alphabet_cnt = defaultdict(lambda:0)
for s in S:
    alphabet_cnt[s] += 1

dp = [[[0] * 26 for _ in range(26)] for _ in range(N)]
for i in range(N):
    for j in range(N):
        for k in range(N):
    dp[i][j][k] = dp[i-1][j]
