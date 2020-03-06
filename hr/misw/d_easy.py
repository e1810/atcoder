h, w = map(int, input().split())
if h>w*2+1 or w>h*2+1: print(-1)
else: print(h+w-1)
