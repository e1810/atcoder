s = input()

if len(s)<26:
	st = set(s)
	for c in "abcdefghijklmnopqrstuvwxyz":
		if not c in st:
			print(s+c)
			break
	else: print(-1)
else:
	prev = ord('a') - 1
	i = len(s)
	for c in s[::-1]:
		if ord(c)>prev: i -= 1
		else: break
		prev = ord(c)
	if i==0: print(-1)
	else:
		for c in sorted(s[i-1:]):
			if ord(c)>ord(s[i-1]):
				print(s[:i-1] + c)
				break

		
	
			
	
