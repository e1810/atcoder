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

ll modpow(ll a, ll p, ll m){
	ll ret = 1;
	while(p){
		if(p%2) ret = ret * a  % m;
		a = a * a % m;
		p >>= 1;
	}
	return ret;
}

ll rec(ll m, ll ans){
	if(m==0) return ans;
	else return rec(m%__builtin_popcount(m), ans+1);
}

int main(){
	int n;
	scanf("%d", &n);
	char s[n+1];
	scanf("%s", s);
	int cnt = 0;
	REP(i, 0, n) cnt += (s[i]=='1');

	if(cnt==0){
		REP(i, 0, n) puts("1");
		return 0;
	}else if(cnt==1){
		ll val_inc = 0, bi_inc = 1;
		REP(i, 0, n){
			if(s[n-i-1]=='1'){
				val_inc = (val_inc + bi_inc) % (cnt+1);
			}
			bi_inc = bi_inc * 2 % (cnt+1);
		}

		REP(i, 0, n){
			if(s[i]=='1') puts("0");
			else{
				ll m = (val_inc + modpow(2, n-i-1, cnt+1)) % (cnt+1);
				printf("%ld
", rec(m, 1));
			}
		}
		return 0;
	}


	ll val_inc = 0, val_dec = 0, bi_inc = 1, bi_dec = 1;
	REP(i, 0, n){
		if(s[n-i-1]=='1'){
			val_dec = (val_dec + bi_dec) % (cnt-1);
			val_inc = (val_inc + bi_inc) % (cnt+1);
		}
		bi_dec = bi_dec * 2 % (cnt-1);
		bi_inc = bi_inc * 2 % (cnt+1);
	}

	REP(i, 0, n){
		ll m, ans = 1;
		if(s[i]=='1') m = (val_dec - modpow(2, n-i-1, cnt-1) + (cnt-1)) % (cnt-1);
		else m = (val_inc + modpow(2, n-i-1, cnt+1)) % (cnt+1);
		printf("%ld
", rec(m, ans));
	}

	return 0;
}
