l, h = map(int, input().split())
n = int(input())
for i in range(n):
    x = int(input())
    if x<l: print(l-x)
    elif x>h: print(-1)
    else: print(0)
