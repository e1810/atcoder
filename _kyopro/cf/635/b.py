for qq in range(int(input())):
	h, n, m = map(int, input().split())
	while h>20 and n:
		h = h//2 + 10
		n -= 1
	print("YNEOS"[h>m*10::2])
