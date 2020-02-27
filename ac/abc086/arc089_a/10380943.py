
n = int(input())

tx, ty, now = 0, 0, 0
cant = 0
for i in range(n):
        t, x, y = map(int, input().split())
        a, b = t-now, abs(x-tx) + abs(y-ty)
        if not(a>=b and a%2==b%2): cant = 1
        tx, ty, now = x, y, t
print("YNeos"[cant::2])
