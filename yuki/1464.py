from math import gcd

s = input()
if not '.' in s:
	print(s + "/1")
	exit()

s = s.split('.')
b = 10**len(s[1])
a = int("".join(s))

g = gcd(a, b)
a //= g
b //= g
print("{}/{}".format(a, b))
