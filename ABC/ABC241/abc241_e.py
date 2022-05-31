N, K = map(int, input().split())
A = list(map(int, input().split()))

visited = [-1] * N
dist = [-1] * N
visited[0] = 0
dist[0] = 0
que = [0]
ans = 0
for i in que:
    ans += A[i]
    K -= 1
    if K == 0:
        break
    ni = (dist[i] + A[i]) % N
    if visited[ni] != -1:
        cycle = (visited[i] + 1) - visited[ni]
        ans += (K // cycle) * ((dist[i] + A[i]) - dist[ni]) 
        X = dist[i] + A[i]
        for _ in range(K % cycle):
            ans += A[ni]
            X += A[ni]
            ni = X % N
        break
    visited[ni] = visited[i] + 1 
    dist[ni] = dist[i] + A[i]
    que.append(ni)
print(ans)
