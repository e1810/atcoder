
n, s = int(input()), input()
ans = cnt = prev = 0
for i in range(n):
        if s[i]==prev: cnt+=1
        else:
                ans += 1
                cnt = 0
        prev = s[i]
print(ans)
