n = int(input())
s = list(input())

alp = [[0]*26 for i in range(n+1)]
for i in range(n):
	for j in range(26):
		alp[i+1][j] = alp[i][j] + (ord(s[i])-ord('a')==j)

bias = [[0]*26 for i in range(n+1)]
for i in range(int(input())):
	t, l, r = input().split()
	if t=='1':
		idx = int(l)
		bias[idx][ord(s[idx-1])-ord('a')] -= 1
		bias[idx][ord(r)-ord('a')] += 1
		s[idx-1] = r
	else:
		
	
