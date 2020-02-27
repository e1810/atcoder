n, *v = map(int, open(0).read().split())
a, b = [[[0, 0] for i in range(100000)] for i in (1,1)]
for i in range(n):
	if i%2:
		b[v[i]-1][0] += 1
		b[v[i]-1][1] = v[i]
	else:
		a[v[i]-1][0] += 1
		a[v[i]-1][1] = v[i]
a.sort(key=lambda x:-x[0]);
b.sort(key=lambda x:-x[0]);

if a[0][1]==b[0][1]:
	print(n-max(a[0][0]+b[1][0], a[1][0]+b[0][0]))
else: print(n-a[0][0]-b[0][0])
