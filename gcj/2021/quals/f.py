T = int(input())
P = int(input())
for qt in range(T):
	cors = [input().count('1') for i in range(100)]
	idx = 0
	for i in range(100):
		if cors[idx] < cors[i]:
			idx = i
	print("Case #%d: %d" % (qt+1, idx+1))

