N, K = map(int, input().split())
A = list(map(int, input().split()))

dp = [False] * (K+1)
dp[0] = True
for i in range(1, K+1):
    ok = True
    for a in A:
        if i - a >= 0:
            if dp[i-a] == False:
                ok = False
        else:
            ok = False
    if ok == True:
        dp[i] = True

if dp[K]:
    print("First")
else:
    print("Second")
