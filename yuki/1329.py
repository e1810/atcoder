n = int(input())

l, r = 1, 10 ** 50000
while r-l>1:
	mid = (r-l)//2 + l
	if mid*mid < n: l = mid
	else: r = mid
print(r)
