s = list(input());tmp=""
t = ["maerd", "remaerd", "esare", "resare"]
while s:
    tmp += s.pop()
    if tmp in t: tmp = ""
if len(tmp)>=7: print("NO")
else: print("YES")
