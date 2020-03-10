n, m = map(int, input().split())

fact = []
for i in range(1, int(m**0.5)):
    if m%i==0:
        fact.append(i)
        fact.append(m//i)
fact.sort()

ans = 1
for i in fact:
    if n*i<=m: ans = i
print(ans)
