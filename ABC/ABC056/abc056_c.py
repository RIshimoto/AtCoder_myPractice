X = int(input())

now = 0
for n in range(X+1):
    if now + n >= X:
        print(n)
        exit()
    now += n        
