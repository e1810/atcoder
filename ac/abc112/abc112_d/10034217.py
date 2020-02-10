
def prime_factor(a):
    ret = []
    for i in range(1, int(a**0.5)):
        if a%i==0:
            ret.append(i)
            ret.append(a//i)
    return ret

n, m = map(int, input().split())
ans = 1
for i in prime_factor(m):
    if i<=m/n: ans = max(ans, i)
print(ans)
