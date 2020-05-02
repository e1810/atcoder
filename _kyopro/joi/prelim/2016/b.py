n, m = map(int, input().split())
a = [int(input())for i in range(n)]

for k in range(1, m+1):
    for i in range(1, n):
        if a[i-1]%k>a[i]%k:
            a[i-1], a[i] = a[i], a[i-1]
for i in a: print(i)
