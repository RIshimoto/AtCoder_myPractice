N = int(input())
S = [input() for _ in range(N)]
S.sort(reverse=True)
s = set()
for string in S:
    if string[0] == '!':
        if string[1:] in s:
            print(string[1:])
            exit()
    else:
        s.add(string)
print("satisfiable")

"""
N = int(input())
S = set(input() for _ in range(N))
for s in S:
    if '!' + s in S:
        print(s)
        exit()
print("satisfiable")
"""
