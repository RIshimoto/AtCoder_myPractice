S, P = map(int, input().split())
x = (S + (S ** 2 - 4 * P) ** 0.5) / 2
y = (S - (S ** 2 - 4 * P) ** 0.5) / 2
if x > 0 and y > 0 and x.is_integer() and y.is_integer():
    print("Yes")
else:
    print("No")
