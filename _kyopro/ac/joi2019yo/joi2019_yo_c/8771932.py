
n = int(input())
ox = input()
i = ans = 0
while i<n-1:
    if ox[i:i+2] in {"OX", "XO"}:
        ans += 1
        i += 1
    i += 1
print(ans)
