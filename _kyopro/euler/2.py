fib = [0]*100
fib[0] = 1
fib[1] = 2
sm = 0
for i in range(2, 100):
    fib[i] = fib[i-2] + fib[i-1]
    if fib[i]>=4e6: break
    if fib[i]%2==0: sm += fib[i]
print(fib)
print(sm)
