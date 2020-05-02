n = int(input())
for i in range(n):
    l = int(input())
    a = list(map(int, input().split()))

    top = 0
    cnt = 0
    while top<l-1:
        idx = a.index(min(a[top:]))
        if top==idx: top+=1; continue
        a.insert(top, a.pop(idx))
        top = idx
    print(*a)