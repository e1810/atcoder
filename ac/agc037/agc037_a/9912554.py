
prev = "-"
b = flag = j = 0
for i in input():
    j += 1
    if flag:
        flag = 0
        prev = "-"
        continue
    if prev==i:
        b += 1
        flag = 1
    prev = i
print(j-b)
