N, M = map(int, input().split())
S = [input() for _ in range(N)]

cnt = sum([S[i].count('1') % 2 == 0 for i in range(N)])
print(cnt * (N - cnt))
