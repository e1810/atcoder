
a, b, c, x, y = map(int, input().split())
ans = min(x*a+y*b, max(x,y)*c*2)
if x>y: ans = min(ans, y*c*2+(x-y)*a)
else: ans = min(ans, x*c*2+(y-x)*b)
print(ans)
