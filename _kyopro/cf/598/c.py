n, m, d = map(int, input().split())
w = list(map(int, input().split()))

ans = [0]*(n+1000)
here = 0
jump = 1
for i in w:
    here += d - 1
    for j in range(i):
        if here>=n-1:
            ans[n-1] += jump
            break
        ans[here] += jump
        here += 1
    else:
        jump += 1
        continue
    break
if here<n-d: print("NO")
else:
    print("YES")
    print(*ans[:n])