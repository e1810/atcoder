n, s = int(input()), input()
print("YNeos"[(s[:n//2]*2 != s)::2])
