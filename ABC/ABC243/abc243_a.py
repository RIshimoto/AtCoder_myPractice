V, A, B, C  = map(int, input().split())

while True:
    if V - A < 0:
        print("F")
        exit()
    else:
        V -= A

    if V - B < 0:
        print("M")
        exit()
    else:
        V -= B

    if V - C < 0:
        print("T")
        exit()
    else:
        V -= C
