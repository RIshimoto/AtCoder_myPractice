N = int(input())
for A in range(1, 100):
    for B in range(1, 100):
        if N == 3 ** A + 5 ** B:
            print(A, B)
            exit()
print(-1)
