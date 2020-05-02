
#!/usr/bin/env python3
a, b = map(int, input().split())
ans = 1
for i in range(2, 1000001):
	if a%i==0 and b%i==0: ans += 1
	while a%i==0: a //= i
	while b%i==0: b //= i
if (a!=1 and b!=1) and (a%b==0 or b%a==0): ans += 1
print(ans)
