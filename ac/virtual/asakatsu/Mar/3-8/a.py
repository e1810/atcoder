n, a, b = map(int, input().split())
allr = abrr = 1

for i in input():
	if i=="a":
		if allr<=a+b:
			print("Yes")
			allr += 1
		else: print("No")
	elif i=="b":
		if allr<=a+b and abrr<=b:
			print("Yes")
			allr += 1
		else: print("No")
		abrr += 1
	else: print("No")


