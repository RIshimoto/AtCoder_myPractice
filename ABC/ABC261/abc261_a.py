L1, R1, L2, R2 = map(int, input().split())

ans = max(min(R2, R1) - max(L1, L2), 0)
print(ans)
