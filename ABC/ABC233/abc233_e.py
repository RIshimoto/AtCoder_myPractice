X = input()

sums = [0] 
for i, x in enumerate(X, 1):
    sums.append(int(x))
    sums[i] += sums[i-1]

sums.reverse()
for i, sum in enumerate(sums):
    if sum >= 10:
        sums[i] = sum % 10
        j = i + 1
        while sum // 10 != 0:
            sum //= 10
            if j >= len(sums):
                sums.append(sum % 10)
            else:
                sums[j] += sum % 10
            j += 1
while sums[-1] == 0:
    sums.pop()
sums.reverse()
ans = ''.join([str(n) for n in sums])
print(ans)
