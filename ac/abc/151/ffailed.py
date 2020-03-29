from math import atan2, pi

def dist(nx, ny, tx, ty): return ((nx-tx)**2 + (ny-ty)**2)**0.5


n = int(input())
x, y = zip(*[map(int, input().split())for i in range(n)])

mn = 1e8
nex = 0
for i in range(n):
	if mn>=y[i]: mn, nex = y[i], i

nx, ny = x[nex], y[nex]
used = [0] * n
used[nex] = True
base_deg = 0

while 1:
	min_deg = 360
	frm = nex
	for j in range(n):
		if frm==j: continue;
		d = atan2(y[j]-ny, x[j]-nx) / pi * 180
		d = (d - base_deg) % 360
		if min_deg>=d:
			nex = j
			min_deg = d
	if used[nex]: break
	used[nex] = True
	nx, ny = x[nex], y[nex]
	base_deg = (base_deg + min_deg) % 360


if n==2: ans = dist(x[0], y[0], x[1], y[1])/2
for i in range(n):
	for j in range(n):
		if i==j: continue
		for k in range(n):
			if not(used[i] and used[j] and used[k]) or k in[i,j]: continue
			a, b, c, d, e, f = x[i], y[i], x[j], y[j], x[k], y[k]
			py = ((e-a)*(a*a+b*b-c*c-d*d) - (c-a)*(a*a+b*b-e*e-f*f)) / (2*(e-a)*(b-d) - 2*(c-a)*(b-f))
			if c==a: px = (2*(b-f)*py - a*a - b*b + e*e + f*f) / (2*(e-a))
			else: px = (2*(b-d)*py - a*a - b*b + c*c + d*d) / (2*(c-a))
			
			r = 0
			for X in (i,j,k): r = max(r, dist(px, py, x[X], y[X]))
			
			for l in range(n):
				if dist(px, py, x[l], y[l])>r: break
			else: ans = r
			
			if abs(atan2(x[i]-x[j],y[i]-y[j])-atan2(x[i]-x[k],y[i]-y[k]))>=pi/2: ans = dist(x[j],y[j],x[k],y[k])/2
			if abs(atan2(x[j]-x[k],y[j]-y[k])-atan2(x[j]-x[i],y[j]-y[i]))>=pi/2: ans = dist(x[k],y[k],x[i],y[i])/2
			if abs(atan2(x[k]-x[i],y[k]-y[i])-atan2(x[k]-x[j],y[k]-y[j]))>=pi/2: ans = dist(x[i],y[i],x[j],y[j])/2
print(ans)
				
			

