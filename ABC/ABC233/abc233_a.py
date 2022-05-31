x, y = map(int, input().split())

z = y - x
if z <= 0:
    print(0)
elif z % 10 == 0:
    print(z//10)
else:
    print(z//10+1)
