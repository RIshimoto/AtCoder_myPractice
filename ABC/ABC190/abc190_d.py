import math
N = int(input())

cnt = 0
n = int((2 * N) ** 0.5)
for i in range(1, n + 1):
	if 2 * N % i == 0:
		j = 2 * N // i
		if i % 2 == 0 and j % 2 != 0: 
			cnt += 2
		elif i % 2 != 0 and j % 2 == 0:
			cnt += 2
print(cnt)
