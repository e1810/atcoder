x, y = map(int, input().split())
if x==y:
  if x+y:
    print(-1)
  else:
    print(1, 1)
else:
  if x>y:
    y+=x
    if x==y: y+=x
  else:
    x+=y
    if x==y: x+=y
  print(x, y)
