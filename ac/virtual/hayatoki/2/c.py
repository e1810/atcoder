from math import atan2, pi

a, b, x = map(int, input().split())
if a*a*b/2>=x: print(atan2(b, x/a*2/b) * 180 / pi)
else:
	jt = x/a*2/a - b
	print(atan2(b-jt, a) * 180 / pi)
