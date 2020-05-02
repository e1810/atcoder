tcnt, fcnt, tmax, fmax = [0]*4
for i in range(int(input())):
    s, r = input().split()
    r = int(r)
    if s=="True":
        if tmax<r:
            tmax = r
            tcnt = 1
        elif tmax==r: tcnt += 1
    else:
        if fmax<r:
            fmax = r
            fcnt = 1
        elif fmax==r: fcnt += 1

if tmax>fmax: print("True")
elif tmax<fmax: print("False")
else:
    if tcnt>fcnt: print("True")
    elif tcnt<fcnt: print("False")
    else: print("Draw")
