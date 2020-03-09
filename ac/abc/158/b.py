n, a, b = map(int, input().split())
d, m = divmod(n, a+b)
print(d*a + min(m, a))
