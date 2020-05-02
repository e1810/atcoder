
s = input()
flag = 1
for i in range(100):
        for j in range(100):
                if s[:j] + s[j+i:]=="keyence":
                        flag = 0
print("YNEOS"[flag::2])
