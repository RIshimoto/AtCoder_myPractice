N = int(input())

def f(x):
    sum = 0
    while x != 0:
        sum += x % 10
        x //= 10
    return sum
M = N * 2

n = N
d, n = n // 4, n % 4
c, n = n // 3, n % 3
b, n = n // 2, n % 2
a = n % 2
x = '1'*a+'2'*b+'3'*c+'4'*d

print(M)
print(x)
