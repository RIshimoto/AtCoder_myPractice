T = int(input())

for _ in range(T):
    N2, N3, N4 = map(int, input().split())
    N1, N2, N3 = N2, N4, N3//2
    ans = 0
    # step1
    x = min(N2, N3)
    N2 -= x
    N3 -= x
    ans += x

    # step2
    x = min(N3, N1//2)
    N3 -= x
    N1 -= x * 2
    ans += x

    # step3
    x = min(N2//2, N1)
    N2 -= x * 2
    N1 -= x
    ans += x

    # step4
    x = min(N2, N1//3)
    N2 -= x
    N1 -= x * 3
    ans += x

    # step4
    x = N1//5
    N1 -= x * 5
    ans += x
    print(ans)
