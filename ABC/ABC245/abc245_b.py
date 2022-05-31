N = int(input())
A = list(map(int, input().split()))

for n in range(2001):
    if n not in A:
        print(n)
        break
