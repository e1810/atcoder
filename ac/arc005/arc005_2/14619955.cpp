#pragma target("avx")
#pragma optimize("O3")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define ALL(vec) vec.begin(),vec.end()
#define PRINT(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define SCAN(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int x, y;
	char s[3];
	scanf("%d %d %s", &y, &x, s);
	x--, y--;
	char fie[9][10];
	REP(i, 0, 9) scanf("%s", fie[i]);

	int dx=0, dy=0;
	if(s[0]=='R'){
		dy = 1;
		if(s[1]=='U') dx = -1;
		if(s[1]=='D') dx = 1;
	}
	if(s[0]=='L'){
		dy = -1;
		if(s[1]=='U') dx = -1;
		if(s[1]=='D') dx = 1;
	}
	if(s[0]=='U') dx = -1;
	if(s[0]=='D') dx = 1;


	REP(I, 0, 4){
		putchar(fie[x][y]);
		int nx = x + dx, ny = y + dy;
		if(nx<0 or 8<nx) dx *= -1;
		if(ny<0 or 8<ny) dy *= -1;
		x = x + dx, y = y + dy;
	}
	putchar('
');
	return 0;
}
