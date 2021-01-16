for qt in range(int(input())):
	s = list(input())
	prev1 = prev2 = "-"

	ans = 0
	for i in range(len(s)):
		if s[i]==prev1 or s[i]==prev2:
			s[i] = "-"
			ans += 1
		prev2 = prev1
		prev1 = s[i]
	print(ans)



