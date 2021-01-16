for qq in range(int(input())):
	s = input()
	ans = a = 0
	for i in range(len(s)):
		if s[i]=='A': a += 1
		else:
			if a>0: a -= 1
			else: ans += 1
	ans &= 1
	ans += a
	print(ans)


