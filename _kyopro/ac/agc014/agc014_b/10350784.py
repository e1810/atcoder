
n, m = map(int, input().split())
ki = [0] * (n+1)

for i in range(m):
        a, b = map(int, input().split())
        ki[a] += 1
        ki[b] -= 1
cant = 0
for i in range(n):
        ki[i+1] += ki[i]
        if ki[i+1]%2: cant = 1
print("YNEOS"[cant::2])
