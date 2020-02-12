n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
x = y = 0
for i in range(n):
    x += b[i]-a[i]
    if a[i]<b[i]: y+=(b[i]-a[i]+1)//2
print("YNeos"[y>x::2])

