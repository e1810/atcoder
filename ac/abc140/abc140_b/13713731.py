#!/usr/bin/env python3
n = int(input())
a, b, c = [list(map(int, input().split())) for i in[0]*3]
ans = b[a[0]-1]
prev = a[0]
for i in range(1, n):
    ans += b[a[i]-1]
    if prev+1==a[i]:
        ans += c[prev-1]
    prev = a[i]
print(ans)
