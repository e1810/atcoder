import strutils;var a= @[0,0,1]
for i in 3..1000000:a.add((a[i-3]+a[i-2]+a[i-1])%%10007)
echo a[stdin.readline.parseInt-1]