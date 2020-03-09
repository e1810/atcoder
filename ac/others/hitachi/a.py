s = input()
cant = 1
for i in range(1, 6):
	if "hi"*i==s: cant = 0
print("YNeos"[cant::2])
