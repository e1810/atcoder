
n = int(input())
st = [input().split()for i in range(n)]
x = input()
ans = flag = 0
for s, t in st:
    if flag: ans+=int(t)
    if s==x: flag=1
print(ans)
