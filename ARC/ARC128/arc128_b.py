T = int(input())
for _ in range(T):
    RGB = list(map(int, input().split()))
    RGB.sort() 
    R, G, B = RGB
    if (G - R) % 3 == 0:
        n = (R - G) // 3
        ans = G
    elif (B - G) % 3 == 0:
        n = (B - G) // 3
        ans = B
    elif (B - R) % 3 == 0:
        n = (B - R) // 3
        ans = B
    else:
        ans = -1
    print(ans)
