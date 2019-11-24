s = input()
k = int(input())
l = len(s)

i = l
b = 1
cnddt = set()
while i:
    for j in range(l-i+1):
        cnddt.add(s[j:j+i])
    i -= 1
print(sorted(list(cnddt))[k-1])

