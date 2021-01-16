for qt in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	st = set()
	for i in range(n):
		for j in range(i+1, n):
			st.add(abs(a[i]-a[j]))
	print(len(st))
