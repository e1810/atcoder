for qq in range(int(input())):
	a, b = map(int, input().split())
	print((a+b-1)//b*b-a)
