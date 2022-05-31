# 3
# 8 12 40
# 4 6 20
# 2 3 10

n = int(input())
a = list(map(int, input().split()))
ans = 0
while True:
	if [i for i in a if i % 2 == 1]:
		break
	a = [i / 2 for i in a]
	ans += 1
print(ans)
