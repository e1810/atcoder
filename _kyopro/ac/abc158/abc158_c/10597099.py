
a, b = map(int, input().split())
ans = -1
for i in range(100000):
        if i//12.5==a and i//10==b:
                ans = i
                break
print(ans)
