n,m=map(int,input().split());a=abs(n%12*30+m/2-6*m);print(min(a,360-a))
