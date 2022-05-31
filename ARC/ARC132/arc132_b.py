from collections import deque
n = int(input())
p = list(map(int, input().split()))

for i in range(n):
    if p[i] == 1:
        if i == 0:
            if p[1] == 2:
                print(0)
            elif p[1] == n: 
                print(2)
        elif i == n - 1:
            if p[0] == n: 
                print(1)
            else:
                print(min(3, n))
        else:
            if p[i+1] == n:
                m = n - i - 1
                print(min(i + 2, m + 1))        
            elif p[i-1] == n:
                m = n - i
                print(min(i, m + 2))
