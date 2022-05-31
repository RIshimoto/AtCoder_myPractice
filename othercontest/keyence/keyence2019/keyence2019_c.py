N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

lst = []
ans = 0
diff = 0
for i in range(N):
    if A[i] < B[i]:
        diff += B[i] - A[i]
        ans += 1
    elif A[i] > B[i]:
        lst.append(A[i] - B[i])
lst.sort(reverse=True)
for i in range(len(lst)):
    if diff <= 0:
        break
    b = lst[i]
    diff -= b
    ans += 1
if diff > 0:
    print(-1)
else:
    print(ans)
