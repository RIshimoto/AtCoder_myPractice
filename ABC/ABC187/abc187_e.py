N = int(input())
edge = []
graph = [[] for _ in range(N)]
for _ in range(N-1):
    a, b = map(int, input().split())
    a, b = a-1, b-1
    edge.append((a, b)) 
    graph[a].append(b)
    graph[b].append(a)

def solve():

    depth = [-1] * N
    depth[0] = 0
    que = [0]
    for q in que:
        for p in graph[q]:
            if depth[p] == -1:
                depth[p] = depth[q] + 1
                que.append(p)

    dp = [0] * N
    Q = int(input())
    for _ in range(Q):
        t, e, x = map(int, input().split())
        A, B = edge[e-1]
        if depth[A] > depth[B]:
            A, B = B, A
            t ^= 3
        if t == 1:
            dp[0] += x
            dp[B] -= x
        else:
            dp[B] += x

    que = [0]
    for q in que:
        for p in graph[q]:
            if depth[q] < depth[p]:
                dp[p] += dp[q]
                que.append(p)
    print(*dp)

if __name__ == '__main__':
    solve()
