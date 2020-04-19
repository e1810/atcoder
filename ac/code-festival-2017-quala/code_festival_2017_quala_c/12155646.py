
h, w = map(int, input().split())
alp = [0] * 26
for i in range(h):
        for c in input(): alp[ord(c)-ord('a')] += 1

m2 = (h * (w%2) + w * (h%2)) // 2
one = h%2 and w%2
cant = False
for i in alp:
        if i%4!=0:
                if i%4==3:
                        if m2: m2 -= 1
                        else: cant = True
                        if one: one = False
                        else: cant = True
                if i%4==2:
                        if m2: m2 -= 1
                        else: cant = True
                if i%4==1:
                        if one: one = False
                        else: cant = True
print("YNeos"[cant::2])
