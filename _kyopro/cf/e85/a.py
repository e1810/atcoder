for qq in range(int(input())):
	nt, nc = 0, 0
	cant = False
	for i in range(int(input())):
		t, c = map(int, input().split())
		if(t<nt or c<nc): cant = True
		if(t<c): cant = True
		if(t-nt<c-nc): cant = True
		nt, nc = t, c
	print("YNEOS"[cant::2])	
