N = int(input())
A = list(map(int, input().split()))

x = 0
for a in A:
    x ^= a

if N % 2 == 0:
    for a in A:
        if x == a:
            print("Win")
            exit()
    print("Lose")
else:
    print("Win")
    
