
n,k,*a=map(int,open(0).read().split());print(min([r-l+min(abs(l),abs(r))for l,r in zip(a,a[k-1:])]))
