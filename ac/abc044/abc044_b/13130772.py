a=list(map(input().count,"abcdefghijklmnopqrstuvwxyz"))
ng=False
for x in a:
  if x%2: ng=True
print("YNeos"[ng::2])
