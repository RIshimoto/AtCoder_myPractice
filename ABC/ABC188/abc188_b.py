import numpy as np

N = int(input())
A = np.array(list(map(int, input().split())))
B = np.array(list(map(int, input().split())))
if A.dot(B) == 0:
    print("Yes")
else:
    print("No")
