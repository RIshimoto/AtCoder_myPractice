a, N = map(int, input().split())

MX = 100000
INF = 100100100

def op1(x):
    if not(x >= 10 and x % 10 != 0):
        return x
    strx = str(x)
    return int(strx[-1] + strx[:-1])

def op2(x):
    return x * a
    
visited = set()
visited.add(1)
que = [(1, 0)]
for q in que:
    x, dist = q 
    if len(str(x)) > len(str(N)):
        continue
    if x == N:
        print(dist)
        exit()

    x1 = op1(x)
    if x1 not in visited:
        visited.add(x1)
        que.append((x1, dist+1))

    x2 = op2(x)
    if x2 not in visited:
        visited.add(x2)
        que.append((x2, dist+1))

print(-1)
