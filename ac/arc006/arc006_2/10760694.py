
n, l = map(int, input().split())
a = [list(input())for i in range(l)]
ty, tx = l, list(input()).index("o")

while ty:
        if 1<tx and a[ty-1][tx-1]=="-": tx -= 2
        elif tx<n+n-3 and a[ty-1][tx+1]=="-": tx += 2
        ty -= 1
print(tx//2+1)
