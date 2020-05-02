
n, *v = map(int, open(0).read().split())
o, e = v[::2], v[1::2]
o.sort();e.sort()

on = []
prev = 0
cnt = 0
for i in o:
  if i==prev: cnt += 1
  else: on.append([prev,cnt]);cnt=1
  prev = i
on.append([prev,cnt])
on.sort(key=lambda x:x[1])


en = []
prev = 0
cnt = 0
for i in e:
  if i==prev: cnt += 1
  else: en.append([prev,cnt]);cnt=1
  prev = i
en.append([prev,cnt])
en.sort(key=lambda x:x[1])

if on[-1][0]==en[-1][0]:
  o=list(zip(*on))[1]
  e=list(zip(*en))[1]
  ans = sum(o)+sum(e)
  print(ans-max(o[-2]+e[-1],o[-1]+e[-2]))
else:
  o=list(zip(*on))[1]
  e=list(zip(*en))[1]
  print(sum(o)+sum(e)-o[-1]-e[-1])
