
#!/usr/bin/env python3
nt, nx, ny = [0]*3
cant = False
for i in range(int(input())):
	t, x, y = map(int, input().split())
	a = abs(x-nx)+abs(y-ny)
	if a>t or (t-nt-a)%2: cant = True
	nt, nx, ny = t, x, y
print("YNeos"[cant::2])
