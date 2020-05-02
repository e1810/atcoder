
n = int(input())
a, b, c = [list(map(int, input().split()))for i in range(3)]

ans = 0
prev = -1
for i in range(n):
    ans += b[i]
    if(prev+1==a[i]): ans += c[a[i]-2]
    prev = a[i]
print(ans)
