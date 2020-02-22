a = list(input())
l = len(a)-1

ans = 0
for i in range(1<<l):
    s = a[0]
    for j in range(l):
        if (i>>j)&1: s += "+"
        s += a[j+1]
    ans += eval(s)
print(ans)
