n = int(input())
ans = 1e18
for i in range(1, n):
    a = i
    b = n-i
    tmp = 0
    while a:
        tmp += a%10
        a //= 10
    while b:
        tmp += b%10
        b //= 10
    ans = min(ans, tmp)
print(ans)
