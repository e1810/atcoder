a, b = 0, 0
for i in range(1, 101):
	a += i * i
	b += i
b *= b
print(b-a)
