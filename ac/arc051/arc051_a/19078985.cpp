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
	int x1, y1, r;
	scanf("%d %d %d", &x1, &y1, &r);
	int x2, y2, x3, y3;
	scanf("%d %d %d %d", &x2, &y2, &x3, &y3);

	if(x2<=x1-r && x1+r<=x3 && y2<=y1-r && y1+r<=y3){
		puts("NO");
	}else{
		puts("YES");
	}

	auto inCir = [&](int x, int y){
		return (x-x1)*(x-x1) + (y-y1)*(y-y1) <= r * r;
	};

	if(!inCir(x2, y2) or !inCir(x2, y3) or !inCir(x3, y2) or !inCir(x3, y3)){
		puts("YES");
	}else{
		puts("NO");
	}
	return 0;
}
