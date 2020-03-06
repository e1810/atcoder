n, *a = map(int, open(0).read().split())

cant = 0
stack = []
for i in range(n, 0, -1):
	tmp = len(a)
	for j in range(len(a)-1, -1, -1):
		if j+1==a[j]:
			if j>i: cant = 1
			a.pop(j)
			stack.append(j+1)
			break
	if len(a)==tmp: cant = 1

if cant: print(-1)
else:
	for i in stack[::-1]: print(i)

