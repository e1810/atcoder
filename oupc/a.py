MOD = 1000000007
while True:
	n = int(input())
	if n==0: break
	a, b, c, d = map(int, input().split())
	x = a * (c-a+1) % MOD + (c-a)*(c-a+1)//2 % MOD
	y = b * (d-b+1) % MOD + (d-b)*(d-b+1)//2 % MOD
	print(x * y % MOD)
