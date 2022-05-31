N = int(input())
A = list(map(int, input().split()))

target = sum(A)
if target % 10 == 0:
    target //= 10
    square_of_cakes = 0
    r = 0
    for l in range(N):
        while square_of_cakes + A[r] <= target:
            square_of_cakes += A[r]
            r = (r + 1) % N
        if square_of_cakes == target:    
            print("Yes")
            exit()
        if r == l:
            r += 1
        else:
            square_of_cakes -= A[l]
print("No")
