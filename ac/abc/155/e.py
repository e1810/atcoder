n=list(map(int, list(input())))
ans = 0
for i in n:
    if i<6: ans += i+1
    else: ans += 10-i
print(ans)
