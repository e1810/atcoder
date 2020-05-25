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

bool isUruu(int year){
        if(year%400==0) return true;
        if(year%100==0) return false;
        if(year%4==0) return true;
        return false;
}

int main(){
	int y, m, d;
	scanf("%d/%d/%d", &y, &m, &d);
	while(1){
		if(y%(m*d)==0){
			printf("%d/%02d/%02d
", y, m, d);
			return 0;
		}
		d++;
		if(m==2){
			if(isUruu(y) and d==30) m++, d=1;
			if(!isUruu(y) and d==29) m++, d=1;
		}else if(m==4 or m==6 or m==9 or m==11){
			if(d==31) m++, d=1;
		}else{
			if(d==32) m++, d=1;
		}
		if(m==13) y++, m=1, d=1;
	}
	return 0;
}
