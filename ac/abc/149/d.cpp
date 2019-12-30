#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, k, r, s, p;
	scanf("%lld %lld %lld %lld %lld", &n, &k, &r, &s, &p);
	string t; cin>>t;

	vector<string> ss(k);
	for(ll i=0; i<k; i++) ss[i] = "";
	for(ll i=0; i<n; i++) ss[i%k] += t[i];

	ll ans = 0;
	for(ll i=0; i<k; i++){
		auto prev = ss[i][0];
		ll cnt = 0;
		for(auto c: ss[i]){
			if(c==prev) cnt++;
			else{
				ll tmp = (cnt+1)/2;
				if(prev=='r') ans += tmp*p;
				else if(prev=='s') ans += tmp*r;
				else ans += tmp*s;
				cnt = 1;
			}
			prev = c;
		}
		ll tmp = (cnt+1)/2;
		if(prev=='r') ans += tmp*p;
		else if(prev=='s') ans += tmp*r;
		else ans += tmp*s;
	}
	printf("%lld\n", ans);
	return 0;
}

