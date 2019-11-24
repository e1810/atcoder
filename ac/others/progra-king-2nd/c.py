n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

a.sort()
b.sort()
ans = "Yes"
for i in range(n):
    if a[i]>b[i]: ans="No"
print(ans)
