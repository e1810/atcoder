n = int(input())
a = b = ab = ans = 0
for i in range(n):
	s = input()
	if s[-1]=='A':
		if s[0]=='B': ab += 1
		else: a += 1
	elif s[0]=='B': b += 1
	ans += s.count("AB")

ans += max(0, ab - 1)
if a>0 and ab>0:
	ans += 1
	a -= 1
if b>0 and ab>0:
	ans += 1
	b -= 1
ans += min(a, b)
print(ans)
