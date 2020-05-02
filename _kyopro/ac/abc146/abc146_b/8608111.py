
alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"*2
n = int(input())
for i in input():
    print(alp[alp.index(i)+n], end="")
print()
