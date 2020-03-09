
a = input()
for i in range(1<<3):
  s = a[0]
  for j in range(3):
    if (i>>j)&1: s += "+"
    else: s += "-"
    s += a[j+1]
  if eval(s)==7: ans = s+"=7"
print(ans)
