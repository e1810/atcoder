
s = input()

ans = b = 0
prev = "W"
for c in s:
    if c=="B":
        b += 1
        prev = "B"
    elif prev=="B":
        ans += b
        prev = "B"
    else:
        b = 0
        prev = "W"
print(ans)
