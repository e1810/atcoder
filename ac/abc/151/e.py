n, k, *lit = map(int, open(0).read().split())
lit.sort()
big = lit[::-1]

print(lit, big)
ans = 0
for i in range(n): ans += (big[i] - lit[i]) * (n-i-1)*(n-i-2)//2
print(ans%1000000007)
