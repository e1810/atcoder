h, w=map(int, input().split())
if h==1 or w==1: print(1)
else: print((h//2) * (w//2) + ((h+1)//2) * ((w+1)//2))
