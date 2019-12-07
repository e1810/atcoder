d = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

mny = 0
ans = 2000000001
for i in range(d):
    mny += a[i]
    if mny>=b[i]: ans = min(ans, b[i])
print(ans if ans<2000000001 else -1)
