#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)
#define ALL(vec) vec.begin(),vec.end()
#define PRINT(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define fi first
#define se second

ll oe_solve(std::vector<ll> &a, bool minus){
	ll ans = 0, sum = 0;
	if(minus){
		sum = -1;
		if(a[0]>=0) ans += a[0]+1;
		else sum = a[0];
	}else{
		sum = 1;
		if(a[0]<=0) ans -= a[0]-1;
		else sum = a[0];
	}
	REP(i, 1, a.size()){
		if(sum>0){
			sum += a[i];
			if(sum>=0){
				ans += sum+1;
				sum = -1;
			}
		}else{
			sum +=a[i];
			if(sum<=0){
				ans -= sum-1;
				sum = 1;
			}
		}
	}
	return ans;
}


int main(){
	int n;
	scanf("%d", &n);
	std::vector<ll> a(n, 0);
	REP(i, 0, n) scanf("%ld", &a[i]);
	printf("%ld
", std::min(oe_solve(a, true), oe_solve(a, false)));
	return 0;
}
