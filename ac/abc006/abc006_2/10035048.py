
tribo = [0] * 1000010
tribo[3] = 1
for i in range(4, 1000010):
    tribo[i] = (tribo[i-1]+tribo[i-2]+tribo[i-3])%10007
print(tribo[int(input())])
