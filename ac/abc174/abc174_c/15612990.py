n = int(input())
x = 7
for i in range(1000000):
    x %= n
    if x==0:
        print(i+1)
        break
    x = x * 10 + 7
else:
    print(-1)
