h, w = map(int, input().split())
a = [list(map(int,input().split())) for i in range(h)]

ans = cnt = 0
arr = []
for i in range(h):
	if i%2:
		for j in range(w-1, -1, -1):
			cnt += 1
			if cnt==h*w: break
			if a[i][j]%2:
				ans += 1
				if j==0:
					arr.append([i+1, j+1, i+2, j+1])
					a[i][j] -= 1
					a[i+1][j] += 1
				else:
					arr.append([i+1, j+1, i+1, j])
					a[i][j] -= 1
					a[i][j-1] += 1
	else:
		for j in range(w):
			cnt += 1
			if cnt==h*w: break
			if a[i][j]%2:
				ans += 1
				if j==w-1:
					arr.append([i+1, j+1, i+2, j+1])
					a[i][j] -= 1
					a[i+1][j] += 1
				else:
					arr.append([i+1, j+1, i+1, j+2])
					a[i][j] -= 1
					a[i][j+1] += 1
print(ans)
for i in arr: print(*i)
