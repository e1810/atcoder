n = int(input())
for i in range(n):
    a, b, v, pay = map(int, input().split())
    if b >= pay - v*min(a, (pay//v)): print("YES")
    else: print("NO")