x,m=float(input()),float(input())
ans = 1-pow(1/m,x)
ans = str(int(ans * 100000 + 0.5) / 100000)
if len(ans)<7: ans += '0' * (7-len(ans))
print(ans)