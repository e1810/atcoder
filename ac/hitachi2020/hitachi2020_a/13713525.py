#!/usr/bin/env python3
ng = True
s = input()
for i in range(1, 6):
    if s=="hi"*i: ng = False
print("YNeos"[ng::2])
