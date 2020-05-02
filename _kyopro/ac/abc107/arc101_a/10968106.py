
n,k,*a=map(int,open(0).read().split());print(min([a[i+k-1]-a[i]+min(abs(a[i+k-1]),abs(a[i]))for i in range(n-k+1)]))
