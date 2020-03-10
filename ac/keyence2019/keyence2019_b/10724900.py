
s = input()
cant = 1
for i in range(len(s)):
        for j in range(i, len(s)):
                if s[:i]+s[j:]=="keyence": cant = 0
print("YNEOS"[cant::2])
