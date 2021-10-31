for qt in range(int(input())):
	cj, jc, s = input().split()
	cj, jc = int(cj), int(jc)

	ans = 0
	prev = '-'
	for i in range(len(s)):
		if s[i]=='C':
			if prev=='J':
				ans += jc
		elif s[i]=='J':
			if prev=='C':
				ans += cj
		prev = s[i]
	
	s = [i for i in s.split('?') if i]
	s.append('-')

	prev = '-'
	for i in range(len(s)):
		if prev+s[i][0]=='CJ':
			ans += cj
		elif prev+s[i][0]=='JC':
			ans += jc
		prev = s[i][-1]
	print("Case #%d: %d" % (qt+1, ans))

