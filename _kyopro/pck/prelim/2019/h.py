n, l = map(int, input().split())
wa = [0] * l
cnt = 0
for i in range(n):
    p, d = map(int, input().split())
    if d: wa[p-1] = d
    else: wa[p-1] = -1
    cnt += d
i = 0
while wa[0]!=1: wa.append(wa.pop(0))
for i in range(l-1): wa[i+1] += wa[i]
print(wa)
print(sum(wa)-cnt)
