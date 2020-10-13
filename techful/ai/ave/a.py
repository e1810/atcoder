n = int(input())
a, b = 0, 0
for i in range(n):
	c, d = map(int, input().split())
	a += c
	b += d
a = a/n + 0.5
b = b/n + 0.5
print(int(a))
print(int(b))
