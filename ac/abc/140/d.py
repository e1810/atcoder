n, k = map(int, input().split())
ans = l = 0
for i in input():
    ans += (n==i)
    n = i
    l += 1
print(min(ans+2*k, l-1))

