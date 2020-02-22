n = int(input())


l, r = 0, n

print(0, flush=True)
re = input()
if re=="Vacant": exit()

for i in range(19):
    mid = (l+r)//2
    print(mid, flush=True)
    tmp = input()
    if tmp=="Vacant": exit()

    p = abs(l-mid)%2

    if (re!=tmp and p) or (re==tmp and p-1):
        l = mid
        re = tmp
    else:
        if abs(l-mid) in [1, n-1]:
            l = mid
            re = tmp
        else: r = mid



