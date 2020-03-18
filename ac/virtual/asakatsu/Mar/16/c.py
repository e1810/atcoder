ans = []
for c in input():
    if c=="B":
        if len(ans): ans.pop()
    else: ans.append(c)
print("".join(ans))
