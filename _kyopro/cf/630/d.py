for qq in range(int(input())):
	s = [list(input()) for i in range(9)]
	if s[0][0]=="9": s[0][0] = "1"
	else: s[0][0] = chr(ord(s[0][0])+1)
	
	if s[3][1]=="9": s[3][1] = "1"
	else: s[3][1] = chr(ord(s[3][1])+1)
	
	if s[6][2]=="9": s[6][2] = "1"
	else: s[6][2] = chr(ord(s[6][2])+1)

	if s[1][3]=="9": s[1][3] = "1"
	else: s[1][3] = chr(ord(s[1][3])+1)

	if s[4][4]=="9": s[4][4] = "1"
	else: s[4][4] = chr(ord(s[4][4])+1)

	if s[7][5]=="9": s[7][5] = "1"
	else: s[7][5] = chr(ord(s[7][5])+1)

	if s[2][6]=="9": s[2][6] = "1"
	else: s[2][6] = chr(ord(s[2][6])+1)

	if s[5][7]=="9": s[5][7] = "1"
	else: s[5][7] = chr(ord(s[5][7])+1)

	if s[8][8]=="9": s[8][8] = "1"
	else: s[8][8] = chr(ord(s[8][8])+1)

	for i in s: print(*i, sep="")
