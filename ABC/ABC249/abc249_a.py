A, B, C, D, E, F, X = map(int, input().split())

takahashi = X // (A + C) * A * B + min(X % (A + C), A) * B
aoki = X // (D + F) * D * E + min(X % (D + F), D) * E
if takahashi < aoki:
    print("Aoki")
elif takahashi > aoki:
    print("Takahashi")
else:
    print("Draw")
