n, m = map(int, input().split())

wa, ac = [0]*n, [0]*n

for i in range(m):
    p, s = input().split()
    p = int(p)
    if s=="AC": ac[p-1] = 1
    else:
        if ac[p-1]==0: wa[p-1] += 1
wac = 0
for i in range(n): wac += wa[i] * ac[i]
print(sum(ac), wac)

