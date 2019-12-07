n, x, y, z = map(int, input().split())
ans = 0
for i in range(n):
    a, b = map(int, input().split())
    if a>=x and b>=y and a+b>=z: ans += 1
print(ans)
