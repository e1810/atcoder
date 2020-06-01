n = int(input())
p = 1
ans = ""
for i in range(32):
    mod = n%(-2*p)
    if mod>0 and p<0:
        if -2*p>0: mod -= (-2*p)
        else: mod += (-2*p)
    if mod<0 and p>0:
        if -2*p>0: mod += (-2*p)
        else: mod -= (-2*p)
    if mod==p:
        ans += "1"
        n -= p
    else :
        ans += "0"
    p *= -2
ans = ans[::-1].lstrip("0")
if len(ans): print(ans)
else: print(0)
