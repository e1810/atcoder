a = list(sorted(map(int, input().split())))
mxw = max(1, min(a[3]-a[2], a[2]-a[1], a[1]-a[0]))
sm = sum(a)
ans = 1
if (sm/mxw/4)%1==0: ans = 0
print("YNeos"[ans::2])
