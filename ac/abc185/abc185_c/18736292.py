ans = 1
n = int(input())
for i in range(n-11, n):
	ans *= i
for i in range(11):
	ans //= i+1
print(ans)
