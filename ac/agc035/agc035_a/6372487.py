
n = int(input())
a = list(map(int, input().split()))

m = a.pop(0)
for i in range(n-2):
    m = m ^ a[i]
print("YNeos"[m!=a[-1]::2])
