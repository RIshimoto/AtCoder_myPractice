from itertools import permutations

s = set()
for t in permutations(input()):
    s.add(''.join(t))
print(len(s))
