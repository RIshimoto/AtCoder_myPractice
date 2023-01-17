N = int(input())
A = list(map(int, input().split()))

graph = [[] for _ in range(N+1)]
for i, a in enumerate(A, 1):
    graph[a].append(i)

same = 0
diff = 0
for a in set(A):
    for i in graph[a]:
        if a == i:
            same += 1
        else:
            if a in graph[i]:
                diff += 1

ans = same * (same - 1) // 2 + diff // 2
print(ans)
