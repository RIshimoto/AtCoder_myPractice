N, X, Y = map(int, input().split())
A = list(map(int, input().split()))

def calc(B):
    len_B = len(B)
    countX, countY, res = 0, 0, 0
    r = 0
    for l in range(len_B):
        while r < len_B and (countX == 0 or countY == 0): 
            if B[r] == X:
                countX += 1
            if B[r] == Y:
                countY += 1
            r += 1
        if countX > 0 and countY > 0:
            res += len_B + 1 - r
        if B[l] == X:
            countX -= 1
        if B[l] == Y:
            countY -= 1
    return res
    
ans = 0
l = 0
for r in range(N):
    if not Y <= A[r] <= X:
        ans += calc(A[l:r]) 
        l = r + 1
        while l < N and not Y <= A[l] <= X:
            l += 1
        r = l + 1
ans += calc(A[l:r+1]) 
print(ans)     

