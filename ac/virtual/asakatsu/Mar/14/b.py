now, tx, ty, cant = [0]*4
for i in range(int(input())):
	t, nx, ny = map(int, input().split())
	k = abs(nx-tx)+abs(ny-ty)
	if k>t or k%2!=(t-now)%2: cant = 1
	now, tx, ty = t, nx, ny
print("YNeos"[cant::2])
