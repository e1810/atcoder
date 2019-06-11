
a,b = map(int, input().split())
ad = list(input())

if ad.pop(a)=="-":
    try:
        int("".join(ad))
        print("Yes")
    except: print("No")
else: print("No")
