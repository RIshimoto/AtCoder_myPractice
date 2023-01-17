N, a, b = map(int, input().split())
A = list(map(int, input().split()))

A.sort()
def check(x):
    cnt = 0
    for i in range(N):
        if A[i] < x:
            cnt += (x - A[i]) // a
            if (x - A[i]) % a != 0:
                cnt += 1
        elif A[i] > x:
            cnt -= (A[i] - x) // b
    if cnt <= 0:
        return True
    return False

left = 0
right = 10 ** 9 + 1
while right - left > 1:
    mid = (right + left) // 2
    if check(mid) == True:
        left = mid
    else:
        right = mid
print(left)
