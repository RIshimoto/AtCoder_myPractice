N = int(input())
A = [int(input()) for _ in range(N)]

b = [A[0]]
for a in A[1:]:
    if b[-1] >= a:
        b.append(a)
    else:
        left, right = -1, len(b)-1
        while right - left > 1:
            mid = (left + right) // 2
            if b[mid] >= a:
                left = mid 
            else:
                right = mid
        b[right] = a
ans = len(b)
print(ans) 
