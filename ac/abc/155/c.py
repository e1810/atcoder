n = int(input())
dic = {}

for i in range(n):
    tmp = input()
    if tmp in dic: dic[tmp] += 1
    else: dic[tmp] = 1

dic = sorted(dic.items())
dic = sorted(dic, key=lambda x:-x[1])

mx = dic[0][1]
for i in dic:
    if i[1]==mx: print(i[0])
    else: break
