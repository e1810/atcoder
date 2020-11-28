#include<bits/stdc++.h>
using ll = int_fast64_t;
using lll = __int128_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

const int MOD = 1e9+7;
const lll MAX = 1e18+1;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	ll n;
	scanf("%ld", &n);
	
	ll l=0, r=std::min(n+1, 2*(ll)sqrt(n)+1);
	while(r-l>1){
		ll mid = (r-l)/2 + l;
		if((mid+1)*mid/2-1>n) r = mid;
		else l = mid;
	}
	printf("%ld
", n+1-l);
	return 0;
}
