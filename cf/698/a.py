from collections import Counter
for qt in range(int(input())):
	n = int(input())
	a = Counter(input().split())
	print(a.most_common(1)[0][1])
