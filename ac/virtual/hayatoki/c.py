l, x, y, s, d = map(int, input().split())
a = [(d-s+l*(s>d))/(x+y)]
if x<y: a.append((s-d+l*(s<d))/(y-x))
print(min(a))
