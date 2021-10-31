n = int(input())
cnt = 0
while n:
	cnt += n%3
	n //= 3
print("YNEOS"[cnt%2::2])
