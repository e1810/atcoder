from ptrlib import *
from sympy.ntheory import factorint


for x in range(1, 10**12+1):
	pc = process("./a.out")
	pc.sendline(str(x))
	ans = int(pc.recvline())
	print("ans =", ans)

	for tans in range(1, 10000):
		rev = 1
		for k,v in factorint(tans).items():
			w = v * (v+1) // 2
			rev *= pow(k, w)
		if rev==x: break
	else:
		print("hack: x =", x)
		print("there's no match in [1,10000)")
		#print("rev =", rev)
		if ans>=0: break
	print("ok")


