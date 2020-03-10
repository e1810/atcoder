
n, k, *a = map(int, open(0).read().split())

MOD = int(1e9+7)
m = MOD -2
re = 1
s = 2
while m:
        if m&1: re = re*s % MOD
        s = s * s % MOD
        m >>= 1
f = (k+1) * k * re
g = k * (k-1) * re

l = r = 0
for i in range(n):
        for j in range(n):
                if a[i]>a[j]:
                        if i>j: l += 1
                        else: r += 1
print((l*g+r*f) % MOD)
