
#!/usr/bin/env python3
n, m, *a = map(int, open(0).read().split())
a.sort(reverse=True)
s = sum(a)/(4*m)
cant = False
for i in range(m):
	if a[i]<s: cant = True
print("YNeos"[cant::2])
