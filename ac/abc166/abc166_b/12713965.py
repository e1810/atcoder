n, k = map(int, input().split())
a = [0] * n
for i in range(k):
    d = int(input())
    b = list(map(int, input().split()))
    for x in b:
        a[x-1]+=1
ans = 0
for x in a:
    if x==0: ans+=1
print(ans)
