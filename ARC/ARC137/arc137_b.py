N = int(input())
A = list(map(int, input().split()))

sums = [0]
for a in A:
    if a == 0:
        sums.append(1)
    elif a == 1:
        sums.append(-1)
for i in range(1, N+1):
    sums[i] += sums[i-1]

def Xmin():
    mn = float('inf')
    mx = sums[0]
    for r in range(1, N+1):
        mx = max(mx, sums[r])
        mn = min(mn, sums[r] - mx)
    return mn

def Xmax():
    mn = float('inf')
    mx = 0
    for r in range(1, N+1):
        mn = min(mn, sums[r-1])
        mx = max(mx, sums[r] - mn)
    return mx

ans = Xmax() - Xmin() + 1
print(ans)
