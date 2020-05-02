alp = "abcdefghijklmnopqrstuvwxyz"
for qq in range(int(input())):
	n, a, b = map(int, input().split())
	d, m = divmod(n, b)
	print(alp[:b] * d + alp[:m])
