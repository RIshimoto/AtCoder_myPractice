A, B, C, X = map(int, input().split())

if A >= X:
    print(1)
elif X > B:
    print(0)
else:
    print(C/(B-A))
