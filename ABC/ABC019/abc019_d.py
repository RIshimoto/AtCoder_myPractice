import sys
N = int(input())

def query(i, j):
    print("? {0} {1}".format(i, j))
    sys.stdout.flush()
    dist = int(input())
    return dist

mx = 0
mx_i = 0
for i in range(1, N+1):
    dist = query(1, i) 
    if mx < dist: 
        mx = dist
        mx_i = i

ans = 0
for i in range(1, N+1):
    dist = query(mx_i, i) 
    ans = max(ans, dist)

print("!",ans)

