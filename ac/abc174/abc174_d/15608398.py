n, c = int(input()), input()

wa = [0] * (n+2)
for i in range(n):
    if(c[i]=='W'): wa[i+1]+=1
for i in range(n+1):
    wa[i+1] += wa[i]

ans = n;
for i in range(n+2):
    w = wa[i]
    r = n-i - (wa[n] - wa[i])
    ans = min(ans, max(w, r))
print(ans)
