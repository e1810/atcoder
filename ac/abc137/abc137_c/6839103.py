
n = int(input())
ss = [sorted(input()) for i in range(n)]
ss.sort()

tmp = ss[0]
cnt = 0
ans = 0
for i in range(n):
    if tmp == ss[i]: cnt+=1
    else:
        tmp = ss[i]
        ans += cnt*(cnt-1)//2
        cnt=1
print(ans+cnt*(cnt-1)//2)
