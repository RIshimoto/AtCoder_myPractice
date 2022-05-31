N = int(input())

checked = [False] * (2 * N + 2)
a = 1
while a != 0:
    for i in range(1, 2 * N + 2):
        if checked[i] == False:
            checked[i] = True
            print(i)
            break
    a = int(input())
    checked[a] = True
