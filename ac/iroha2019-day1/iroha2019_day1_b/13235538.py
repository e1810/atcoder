s, k = input(), int(input())
k %= len(s)
print(s[k:] + s[:k])
