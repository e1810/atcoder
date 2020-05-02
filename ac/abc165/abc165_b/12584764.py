x = 100
n = int(input())
ans = 0
while x<n:
    x += x//100
    ans += 1
print(ans)
