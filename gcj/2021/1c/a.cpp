#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)
using ll = int_fast64_t;

int main(){
	int t;
	scanf("%d", &t);
	REP(qt, 0, t){
		ll n, k;
		scanf("%ld %ld", &n, &k);
		ll a[n];
		REP(i, 0, n) scanf("%ld", &a[i]);
		std::sort(a, a+n);

		std::vector<ll> b;
		b.push_back(a[0]-1);
		REP(i, 0, n-1) b.push_back((a[i+1]-a[i]) / 2);
		b.push_back(k - a[n-1]);
		std::sort(b.begin(), b.end(), std::greater<ll>());
		long double sum = b[0] + b[1];
		printf("Case #%d: %.10Lf\n", qt+1, sum / k);
	}
	return 0;
}
