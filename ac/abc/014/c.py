c = [0] * 1000002
for i in range(int(input())):
	a, b = map(int, input().split())
	c[a] += 1
	c[b+1] -= 1
for i in range(1000000): c[i+1] += c[i]
print(max(c))

