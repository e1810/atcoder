
s, e = map(int, input().split())
ans = 10 ** 9
b = min(s+2019, e)
for i in range(s, b + 1):
    for j in range(i+1, b+1):
        ans = min(ans, i*j%2019)
print(ans)
