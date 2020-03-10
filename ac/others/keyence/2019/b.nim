var
  s=stdin.readline
  k="keyence"
  ans="YES"
  con=7

for i in 0..6:
  if s[i]==k[i]:con-=1
  else:break
for i in 1..con:
  if s[^i]!=k[^i]:ans="NO"
echo ans
