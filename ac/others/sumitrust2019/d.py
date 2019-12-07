input()
nums = [0]*10
for i in input():
    nums[int(i)]+=1
ans = 0
for i in range(1000):
    nnn = [0]*10
    for j in str(i).zfill(3):
        nnn[int(j)]+=1
    for j in range(10):
        if nums[j]<nnn[j]:break
    else:
        print(i)
        ans+=1
print(ans)
