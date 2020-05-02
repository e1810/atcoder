
n = int(input())
d = {}

for i in range(n):
    s = "".join(sorted(input()))
    if s in d: d[s] += 1
    else: d[s] = 1
ans = 0
for i in d.values():
    ans += (i*i-i)//2
print(ans)
