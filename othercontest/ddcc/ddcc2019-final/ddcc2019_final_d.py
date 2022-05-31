MOD = pow(2, 32)
S = input()
Q = int(input())
to_index = {'D':1, 'I':2, 'S':3, 'C':4, 'O':5}

def ear_dp(l, r):
    dp = [0] * 6
    dp[0] = 1
    for s in S[l:r]:
        if s in 'DISCO':
            j = to_index[s]
            dp[j] += dp[j-1]
    return dp[5] % MOD

for _ in range(Q):
    l, r = map(int, input().split())
    ans = ear_dp(l-1, r)
    print(ans)
