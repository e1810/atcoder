
a = list(input().replace(" ","-"))
mx = -1000
for i in range(6):
    b = a.copy()
    if(i<3): b[i] = "9"
    elif(i==3): b[i+1] = "1"
    else: b[i+1] = "0"
    mx = max(mx, eval("".join(b)))
print(mx)
