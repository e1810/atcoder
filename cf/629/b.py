for qq in range(int(input())):
	a, b = map(int, input().split())
	ans = ["a"] * a
	for i in range(1, a):
		if b-i<=0:
			ans[i] = ans[b-1] = "b"
			break
		b -= i
	print("".join(ans)[::-1])
	
