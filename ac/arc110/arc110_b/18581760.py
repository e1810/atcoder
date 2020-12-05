n = int(input())
s = input()

if n==1:
	if s=="1": print(10**10*2)
	else: print(10**10)
	exit()
if n==2:
	if s=="11": print(10**10)
	elif s=="10": print(10**10)
	elif s=="01": print(10**10-1)
	else: print(0)
	exit()
if n==3:
	if s=="110": print(10**10)
	elif s=="101": print(10**10-1)
	elif s=="011": print(10**10-1)
	else: print(0)
	exit()
if n==4:
	if s=="1101": print("9"*10)
	elif s=="1011": print("9"*10)
	elif s=="0110": print("9"*10)
	else: print(0)
	exit()

b = s.split("110")
try:
	a = b.pop(0)
	c = b.pop()
except:
	print(0)
	exit()
if not a in ("", "0", "10"):
	print(0)
	exit()
if not c in ("", "1", "11"):
	print(0)
	exit()
if "".join(b):
	print(0)
	exit()

cnt = len(b) + 1
if a: cnt += 1
if c: cnt += 1
print(10**10 + 1 - cnt)
