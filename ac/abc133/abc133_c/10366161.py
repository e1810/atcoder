
l, r = map(int, input().split())

ans = 2018
for i in range(l, min(r+1, l+2020)):
        for j in range(i+1, min(r+1, i+2020)):
                ans = min(ans, (i*j)%2019)
print(ans)
