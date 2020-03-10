n, q = map(int, input().split())
s = input()

ac = [0] * n

for i in range(1, n):
	if s[i-1:i+1]=="AC": ac[i] = 1
	ac[i] += ac[i-1]

for i in range(q):
	l, r = map(int, input().split())
	print(ac[r-1] - ac[l-1])
