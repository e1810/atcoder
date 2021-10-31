p = {str(i):c for i,c in enumerate(input())}
s = [p[c] if c.isdecimal() else c for c in input()]
print("".join(s))
