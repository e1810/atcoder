from queue import Queue
def gcd(a, b):
    if a<b: a,b=b,a
    while b:
        a,b = b, a%b
    return a

def lcd(a, b):
    return (a*b) // gcd(a,b)

n = int(input())
q = list(map(int, input().split()))
while len(q)>1:
    tmp = lcd(q.pop(0), q.pop(0))
    if not tmp in q:
        q.append(tmp)
        n += 1
print(n)

