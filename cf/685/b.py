for qc in range(int(input())):
	n, q = map(int, input().split())
	s = input()
	for qqc in range(q):
		l, r = map(int, input().split())
		idxs = []
		t = s[l-1:r]
		pos = 0
		for i in range(n):
			if pos<len(t) and t[pos]==s[i]:
				pos += 1
				idxs.append(i)
		if pos!=len(t): print("NO")
		else:
			for i in range(1, len(t)):
				if idxs[i-1]+1!=idxs[i]:
					print("YES")
					break
			else:
				if t[-1] in s[idxs[-1]+1:]:
					print("YES")
				else:
					print("NO")
