#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

const int MOD = 1e9+7;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	int n;
	scanf("%d", &n);

	std::vector<P> xy;
	REP(i, 0, n){
		int a, b;
		scanf("%d %d", &a, &b);
		xy.emplace_back(a, b);
	}

	double ans = 1e9;
	REP(i, 0, n){
		auto [x1, y1] = xy[i];
		auto [x2, y2] = xy[(i+1)%n];
		int a = y2-y1, b = x1-x2;
		int c = (y1-y2)*x1 + (x2-x1)*y1;
		ans = std::min(ans, abs(a*x+b*y+c) / sqrt(a*a+b*b));
	}
	printf("%lf
", ans);
	return 0;
}
