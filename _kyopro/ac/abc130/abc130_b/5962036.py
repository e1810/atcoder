
n, x = map(int, input().split())
l = list(map(int, input().split()))

b = 0
ans = 1
for i in l:
    b += i
    if b <= x: ans += 1
print(ans)
