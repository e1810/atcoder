
a, b = map(int, input().split())
a -= 1
A = a//4 - a//100 + a//400
B = b//4 - b//100 + b//400
print(B-A)
