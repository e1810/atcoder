n = int(input())
x = list(map(int, input().split()))
m = int(input())
a = list(map(int, input().split()))

koma = [0]*2021
for i in x: koma[i] = 1
koma[2020] = 1

for i in a:
    if not koma[x[i-1]+1]:
        koma[x[i-1]] = 0
        koma[x[i-1]+1] = 1
        x[i-1] += 1
for i in range(n):print(x[i])

