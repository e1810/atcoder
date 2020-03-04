
import strutils, future
var
    a = lc[stdin.readLine.parseInt | (x<-0..4), int]
    k = stdin.readLine.parseInt
    cant = 0
for i in 0..4:
    for j in 0..4:
        if abs(a[i]-a[j])>k: cant = 1
echo if cant==0: "Yay!" else: ":(" 
