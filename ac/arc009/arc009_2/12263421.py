#!/usr/bin/env python3
a = "abcdefghij"
b = input().split()

def trans(s):
    for i in range(10): s = s.replace(b[i], a[i])
    for i in range(10): s = s.replace(a[i], str(i))
    return int(s)

for x in sorted([input() for i in range(int(input()))], key=trans):
    print(x)
