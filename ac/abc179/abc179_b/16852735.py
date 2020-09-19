ng = True
cnt = 0
for i in range(int(input())):
    a, b = map(int, input().split())
    if a==b: cnt+=1
    else: cnt = 0
    if cnt>=3: ng = False
print("YNeos"[ng::2])
