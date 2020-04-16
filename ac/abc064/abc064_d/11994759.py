
n, s = int(input()), input()
mx, lt, rt = [0]*3
for i in range(n):
        if s[i]=="(": lt += 1
        else: rt += 1
        mx = max(mx, rt-lt)
print("("*mx + s + ")"*(lt+mx-rt))
