n, *a = map(int, open(0).read().split())
stack = []
isOK = 0
for i in range(n):
    if a[i]>0:
        if a[i] in stack: break
        stack.append(a[i])
    else:
        if not stack: break
        if -a[i] != stack.pop(): break
else: isOK = 1
print("OK" if isOK else i+1)
