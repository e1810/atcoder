
s = input()
a, b = int(s[:2]), int(s[2:])

if (a>12 or a==0) and (b>12 or b==0): print("NA")
elif (a>12 or a==0) and b<=12: print("YYMM")
elif a<=12 and (b>12 or b==0): print("MMYY")
elif a<=12 and b<=12: print("AMBIGUOUS")
