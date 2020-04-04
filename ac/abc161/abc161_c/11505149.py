
#!/usr/bin/env python3
n, k = map(int, input().split())
print(min(n, n-n//k*k, (n+k-1)//k*k-n))
