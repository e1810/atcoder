ans = 0
for i in range(int(input())):
    a, b = map(int, input().split())
    ans += b*(b+1)//2 - (a-1)*a//2
print(ans)
