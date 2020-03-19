n = int(input())
a = [list(map(int,input().split()))for i in range(n)]
for i in range(n): a[i][1] += a[i][0]
s, t = zip(*sorted(a, key=lambda x:x[1]))

n1 = n2 = ans = 0
used = [0] * n
for i in range(n):
    if s[i]>=n1:
        ans += 1
        n1 = t[i]
        used[i] = 1
print(s, t, used, ans)

for i in range(n):
    print(n2, s[i])
    if s[i]>=n2 and used[i]==0:
        ans += 1
        n2 = t[i]
        used[i] = 1
print(used, ans)
