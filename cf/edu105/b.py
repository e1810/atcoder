for qt in range(int(input())):
	n, u, r, d, l = map(int, input().split())
	ng = False
	if u+d < max(0, r-n+2) + max(0, l-n+2): ng = True
	if r+l < max(0, u-n+2) + max(0, d-n+2): ng = True
	if min(u, d) < max(0, r-n+1) + max(0, l-n+1): ng = True
	if min(r, l) < max(0, u-n+1) + max(0, d-n+1): ng = True
	print("YNEOS"[ng::2])
