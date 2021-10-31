s = input()
if s[0]=='-': print(0)
else:
	s = s[:-2]
	if len(s): print(s)
	else: print(0)
