
n = int(input())
s = input()

ans = 0
prev = " "
for c in s:
    if c!=prev:
        ans += 1
    prev = c
if c!=prev: ans+=1
print(ans)
