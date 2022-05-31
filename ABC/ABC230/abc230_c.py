N, A, B = map(int, input().split())
P, Q, R, S = map(int, input().split()) 

m = A + max(1-A, 1-B)
n = B + max(1-A, 1-B)

l = A + max(1-A, B-N)
o = B - max(1-A, B-N)
for i in range(P, Q+1):
    for j in range(R, S+1):
        if i - m == j - n:
            print('#', end='')
        elif l - i == j - o: 
            print('#', end='')
        else:
            print('.', end='')
    print()
