
n = int(input())
ws = list(map(int, input().split()))
mn = sum(ws)

for i in range(n):
  dif=abs(sum(ws[:i])-sum(ws[i:]))
  mn = min(mn, dif)
print(mn)
