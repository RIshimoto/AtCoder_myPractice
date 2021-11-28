N = int(input())
graph = [0] * N
for _ in range(N - 1):
    a, b = map(int, input().split())
    graph[a - 1] += 1
    graph[b - 1] += 1
print("Yes" if max(graph) == N-1 else "No")
