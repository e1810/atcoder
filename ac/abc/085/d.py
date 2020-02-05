n, h = map(int, input().split())
a, b = 0, [0]*n
for i in range(n):
    x, b[i] = map(int, input().split())
    a = max(x, a)
b.sort(reverse=True)

cnt = 0
for i in range(n):
    if b[i]>a:
        h -= b[i]
        cnt += 1
        if h<=0:
            print(cnt)
            exit()
print(cnt+(h+a-1)//a)
