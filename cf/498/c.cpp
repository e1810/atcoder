#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;

int main(){
	int n;
	scanf("%d", &n);
	ll a[n];
	REP(i, 0, n) scanf("%ld", &a[i]);

	std::map<ll,int> mp;
	ll sum = 0, l[n];
	REP(i, 0, n){
		sum += a[n-1-i];
		l[n-1-i] = sum;
		mp[sum]++;
	}

	sum = 0;
	ll ans = 0;
	REP(i, 0, n){
		mp[l[i]]--;
		sum += a[i];
		mp[sum]++;
		if(mp[sum]>=2) ans = std::max(ans, sum);
	}
	printf("%ld\n", ans);
	return 0;
}
