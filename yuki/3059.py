from math import tan, pi
for t in range(int(input())):
	x = tan(int(input())/180*pi)
	for i in range(1,100000):
		if x*i%1==0:
			print("Y")
			break
	else: print("N")
