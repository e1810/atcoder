
n, m, *a = map(int, open(0).read().split())
x = n - sum(a)
print(x if x>=0 else -1)
