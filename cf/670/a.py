for qq in range(int(input())):
	n = int(input())
	a = sorted(map(int, input().split()))
	x = y = 0
	for i in a:
		if x==i: x += 1
		elif x<i: break
		else:
			if y==i: y += 1
			else: break
	print(x+y)


