
n, m = map(int, input().split())
ac = [0] * n
wa = [0] * n
for i in range(m):
    p, s = input().split()
    p = int(p)-1
    if not ac[p]:
        if s=="AC": ac[p] = 1
        else: wa[p] += 1
was = 0
for i in range(n):
    if ac[i]: was += wa[i]
print(sum(ac), was)
