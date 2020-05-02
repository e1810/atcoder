from collections import Counter
for qq in range(int(input())):
	n = int(input())
	a, b = zip(*Counter(map(int, input().split())).items())
	mx = max(b)
	s = len(b) - 1
	print(max(min(mx, s), min(mx-1, s+1)))
