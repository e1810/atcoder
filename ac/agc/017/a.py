n, p, *a = map(int, open(0).read().split())
even = odd = 0
for i in a:
    if i%2: odd += 1
    else: even += 1
ecr = [1] * (even+1)
for i in range(1, even): ecr[i] = ecr[i-1]*(even-i+1)//i
ocr = [1] * (odd+1)
for i in range(1, odd): ocr[i] = ocr[i-1]*(odd-i+1)//i
print(sum(ecr) * sum(ocr[p::2]))
    

