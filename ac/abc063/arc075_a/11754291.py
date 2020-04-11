
n, *a = map(int, open(0).read().split())
ans = sum(a)
if ans%10==0:
        for i in sorted(a):
                if i%10:
                        ans -= i
                        break
        else: ans = 0
print(ans)
