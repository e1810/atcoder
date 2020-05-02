t, a, b = map(int, input().split())
for t in range(t):
	inputcnt = 0
	x = (1000000000 - a) * 2
	l, r = -10**9, -a+1
	hit = 0
	while r-l>1:
		mid = (l+r)//2
		cnt =  0
		for i in range(x):
			print(i-x//2, mid, flush=True)
			if input() in ("HIT", "CENTER"):
				cnt += 1
				hit = i-x//2
			inputcnt += 1
		if cnt>1: r = mid
		else: l = mid
	print(hit, l+a, flush=True)
	while(inputcnt<299):
		input(inputcnt)
		inputcnt += 1
	
