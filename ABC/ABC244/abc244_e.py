import sys
sys.setrecursionlimit(10**6)
N, M, K, S, T, X = map(int, input().split())
S, T, X = S - 1, T - 1, X - 1 
MOD = 998244353 

def solve():
    edge = []
    for i in range(M):
        U, V = map(int, input().split())
        U, V = U - 1, V - 1
        edge.append((U, V))

    dp = [[[0] * N for _ in range(K+1)] for _ in range(2)]
    dp[0][0][S] = 1
    for i in range(K):
        for U, V in edge:
            for x in range(2):
                dp[x][i+1][V] += dp[x^(V==X)][i][U]
                dp[x][i+1][V] %= MOD
                dp[x][i+1][U] += dp[x^(U==X)][i][V]
                dp[x][i+1][U] %= MOD
    print(dp[0][K][T]%MOD)

def my_solve():
    graph = [[] for _ in range(N)]
    for i in range(M):
        U, V = map(int, input().split())
        U, V = U - 1, V - 1
        graph[U].append(V)
        graph[V].append(U)

    aaa = 0
    dp = [[[-1 for _ in range(2)] for _ in range(N)] for _ in range(K+1)]
    def dfs(v, x_cnt=0, depth=0):
        aaa += 1
        print(aaa)
        if dp[depth][v][x_cnt%2] != -1:
            return dp[depth][v][x_cnt%2] % MOD

        if depth == K:
            if v == T and x_cnt % 2 == 0: 
                dp[depth][v][x_cnt%2] = 1
            else:
                dp[depth][v][x_cnt%2] = 0
            return dp[depth][v][x_cnt%2] % MOD

        cnt = 0
        for u in graph[v]:
            if u == X:
                cnt += dfs(u, (x_cnt+1)%2, depth+1) % MOD
            else:
                cnt += dfs(u, x_cnt%2, depth+1) % MOD
                cnt %= MOD
                dp[depth][v][x_cnt%2] = cnt % MOD
        return cnt % MOD

    ans = dfs(S) % MOD
    print(ans)

if __name__ == '__main__':
    my_solve()
