N, K = map(int, input().split())
R, S, P = map(int, input().split())
T = input()

ans = 0
for i in range(0, K):
    t = ''
    for j in range(i, N, K):
        t = t + T[j]
    n = len(t)
    dp = [[0 for _ in range(3)] for _ in range(n)]
    print(dp)
    for i in range(n):
        if t[i] == 'r':
            pass
        elif t[i] == 'p':
            pass
        elif t[i] == 's':
            pass
print(ans)

