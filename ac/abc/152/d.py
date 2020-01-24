n = int(input())
dic = {}
for i in range(10, 100): dic[str(i)]=0
for i in range(1, n+1):
    s = str(i)
    dic[s[0]+s[-1]] += 1

ans = 0
for i in range(1, n+1):
    s = str(i)
    if s[-1]=="0": continue
    ans += dic[s[-1]+s[0]]
print(ans)
