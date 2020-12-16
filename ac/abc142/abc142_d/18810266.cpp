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
	ll a, b;
	scanf("%ld %ld", &a, &b);
	
	int ans = 1;
	for(ll i=2; i*i<=std::max(a, b); i++){
		if(a%i==0 && b%i==0) ans++;
		while(a%i==0) a /= i;
		while(b%i==0) b /= i;
	}
	if(a>1 && b>1 && a==b) ans++;
	printf("%d
", ans);
	return 0;
}
