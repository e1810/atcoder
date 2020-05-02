
n = int(input())
ab = sorted([list(map(int, input().split()))for i in range(n)], key=lambda x:x[1])

now = cant = 0
for a, b in ab:
    now += a
    if now>b: cant = True
print("YNeos"[cant::2])
