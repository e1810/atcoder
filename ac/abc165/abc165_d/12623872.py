a, b, n = map(int, input().split())
d, m = divmod(n, b)
if m>=b-1: x = d*b + b-1
else: x = max(0, d*b-1)
y = d*b+m
print(max((a*x)//b - a*(x//b), (a*y)//b - a*(y//b)))
