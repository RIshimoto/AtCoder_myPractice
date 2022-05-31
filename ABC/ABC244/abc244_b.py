N = int(input())
T = input()

x = 0
y = 0
dist_x = 1
dist_y = 0
for t in T:
    if t == 'S':
        x += dist_x
        y += dist_y
    elif t == 'R':
        if dist_x == 1 and dist_y == 0:
            dist_x = 0
            dist_y = -1
        elif dist_x == 0 and dist_y == -1:
            dist_x = -1
            dist_y = 0
        elif dist_x == -1 and dist_y == 0:
            dist_x = 0 
            dist_y = 1
        elif dist_x == 0 and dist_y == 1:
            dist_x = 1 
            dist_y = 0
print(x, y)
