def S(n):
    sum = 0
    while n:
        sum = sum + n % 10
        n = n // 10
    return sum

A, B = map(int, input().split())
print(max(S(A), S(B)))
