N = int(input())
HS = [map(int, input().split()) for _ in range(N)]
H, S = [list(i) for i in zip(*HS)]

def is_ok(penalty):
    que = []
    for i in range(N):
        if penalty < H[i]:
            return False
        que.append((penalty - H[i]) // S[i])
    
    que.sort()
    for n, q in enumerate(que):
        if n > q: 
            return False
    return True

ans = float('inf')
left = 0
right = max([H[i] + (N-1) * S[i] for i in range(N)])
while right - left > 1:
    mid = (left + right) // 2
    if is_ok(mid):
        right = mid
        ans = min(ans, mid)
    else:
        left = mid
print(ans)
