n = int(input())
ans = (n-1) / n
ans = str(int(ans * 100000) / 1000)
if len(ans)<6: ans += "0" * (6 - len(ans))
print(ans)
