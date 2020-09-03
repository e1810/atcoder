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

int main(){
    int n;
    scanf("%d", &n);
    char s[n+1];
    scanf("%s", s);

    ll cnt = 0;
    REP(i, 0, n) cnt += (s[i]=='1');

    ll X = 0, incX = 0, decX = 0;
    ll r = 1, incr = 1, decr = 1;
    for(int i=n-1; i>=0; i--){
	if(s[i]=='1'){
	    X = (X + r) % cnt;
	    incX = (incX + incr) % (cnt+1);
	    if(cnt>1) decX = (decX + decr) % (cnt-1);
	}
	r = r * 2 % cnt;
	incr = incr * 2 % (cnt+1);
	if(cnt>1) decr = decr * 2 % (cnt-1);
    }

    REP(i, 0, n){
	ll x;
	if(s[i]=='1'){
	    if(cnt!=1){ 
	    	x = decX;
	    	x -= modpow(2, n-1-i, cnt-1);
	    	x = (x+cnt-1) % (cnt-1);
	    }else{
		puts("0");
		continue;
	    }
	} else {
	    x = incX;
	    x += modpow(2, n-1-i, cnt+1);
	    x = (x+cnt+1) % (cnt+1);
	}
	int ans = 1;
	while(x){
	    x %= __builtin_popcount(x);
	    ans++;
	}
	printf("%d
", ans);
    }
    return 0;
}
