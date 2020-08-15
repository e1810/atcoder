x, k, d = map(int, input().split())

r = x%d
l = r-d

lc = abs(x-l)//d
rc = abs(x-r)//d

ans = min(abs(x-d*k), abs(x+d*k))
if(k>=lc):
    if((k-lc)%2): ans = min(ans, min(abs(l+d), abs(l-d)))
    else: ans = min(ans, abs(l))
if(k>=rc):
    if((k-rc)%2): ans = min(ans, min(abs(r+d), abs(r-d)))
    else: ans = min(ans, abs(r))
print(ans)
