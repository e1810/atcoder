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

	bool ok = false;
	for(ll i=1; i*i<=b; i++){
		if(b%i) continue;
		if(i+b/i==a) ok = true;
	}
	if(ok) puts("Yes");
	else puts("No");
	return 0;
}
