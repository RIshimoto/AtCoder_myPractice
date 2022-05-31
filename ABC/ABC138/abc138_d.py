import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

def solve():
    N, Q = map(int, input().split())

    tree = [[] for _ in range(N)] 
    for _ in range(N-1):
        a, b = map(int, input().split())
        a, b = a-1, b-1
        tree[a].append(b)
        tree[b].append(a)

    dp = [0] * N
    def dfs(v, prev=-1):
        for u in tree[v]:
            if u == prev:
                continue
            dp[u] += dp[v]
            dfs(u, v)
    for _ in range(Q):
        p, x = map(int, input().split())
        dp[p-1] += x

    dfs(0)
    print(*dp)

if __name__ == '__main__':
    solve()
