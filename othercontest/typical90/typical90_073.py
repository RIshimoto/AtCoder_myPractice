N = int(input())
c = list(map(str, input().split()))
MOD = 10**9+7

graph = [[] for _ in range(N)]
for _ in range(N-1):
    a, b = map(int, input().split())
    a, b = a-1, b-1
    graph[a].append(b)
    graph[b].append(a)

def solve():
    dp = [[0 for _ in range(3)] for _ in range(N)]
    def dfs(pos, prev):
        val1, val2 = 1, 1
        for i in graph[pos]:
            if i == prev:
                continue
            dfs(i, pos)
            if c[pos] == 'a':
                val1 *= dp[i][0] + dp[i][2]
                val2 *= dp[i][0] + dp[i][1] + 2 * dp[i][2]
            if c[pos] == 'b':
                val1 *= dp[i][1] + dp[i][2]
                val2 *= dp[i][0] + dp[i][1] + 2 * dp[i][2]
            val1 %= MOD
            val2 %= MOD

        if c[pos] == 'a':
            dp[pos][0] = val1
            dp[pos][2] = (val2 - val1 + MOD) % MOD
        if c[pos] == 'b':
            dp[pos][1] = val1
            dp[pos][2] = (val2 - val1 + MOD) % MOD
    dfs(1, -1)
    print(dp[1][2])

if __name__ == '__main__':
    solve()
