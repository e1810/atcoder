#!/usr/bin/env python3
ans = [1e9] * int(input())
for i, x in enumerate(map(int, input().split())):
    ans[i] = min(ans[i], x)
    ans[i+1] = min(ans[i+1], x)
print(sum(ans))
