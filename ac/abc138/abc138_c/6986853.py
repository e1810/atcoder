
n = int(input())
a = sorted(list(map(int, input().split())))
ans = a.pop(0)
for i in a: ans = (ans+i)/2
print(ans)
