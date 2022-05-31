N = int(input())
A = int("".join(map(str, input().split())), 2)

for n in range(N-1, 0, -1):
    if A & (1 << n) == 1:
        print("No")
        exit()

    if A & 1 == 1:
        A ^= (1 << n) - 1 
    else:
        A >>= 1

if A == 0:
    print("Yes")
else:
    print("No")
