
s, k = input(), int(input())
char=[]
prev = "0"
cnt = 0
for i in s:
    if i==prev: cnt+=1
    else: char.append(cnt);cnt=1
    prev = i
char.append(cnt)

ans = 0
for i in char: ans += i//2
ans *= k
if s[0]==s[-1]: ans += (char[1]%2 and char[-1]%2) * (k-1)

if len(set(s))==1: ans = len(s)*k//2

print(ans)
