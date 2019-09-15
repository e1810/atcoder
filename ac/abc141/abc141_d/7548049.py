
import heapq as hq
n, m = map(int, input().split())
a = []
for i in input().split(): hq.heappush(a, -int(i))
for i in range(m): hq.heappush(a, int(hq.heappop(a)/2))
print(-sum(a))
