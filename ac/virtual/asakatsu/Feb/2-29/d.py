s, t = input(), input()

cant = 0
sr = [0]*26
tr = [0]*26
for i in range(len(s)):
	x = ord(s[i]) - ord('a')
	y = ord(t[i]) - ord('a')
	if s[i]!=t[i]:
		if sr[x]!=0 and sr[x]!=t[i] or tr[y]!=0 and tr[y]!=s[i]: cant = 1
	sr[x] = t[i]
	tr[y] = s[i]
print("YNeos"[cant::2])
