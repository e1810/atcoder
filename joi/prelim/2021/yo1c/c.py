n,a,b=[list(map(int,input().split()))for i in[0]*3];print(sum([sum([i<=j for j in b])for i in a]))
