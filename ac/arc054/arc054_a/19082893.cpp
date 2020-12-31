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
	ll l, x, y, s, d;
	scanf("%ld %ld %ld %ld %ld", &l, &x, &y, &s, &d);

	double ans = 4e9;
	if(s<=d) ans = std::min(ans, (d-s)/(double)(x+y));
	else ans = std::min(ans, (d+l-s)/(double)(x+y));
	if(y>x){
		if(s>=d) ans = std::min(ans, (s-d)/(double)(y-x));
		else ans = std::min(ans, (s+l-d)/(double)(y-x));
	}
	printf("%lf
", ans);
	return 0;
}
