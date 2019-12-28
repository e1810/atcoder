#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
typedef pair<ll,ll> P;

int main(){
	ll n, m, v, p;
	scanf("%lld %lld %lld %lld", &n, &m, &v, &p);
	ll a[n];
	for(ll i=0; i<n; i++) scanf("%lld", &a[i]);
	sort(a, a+n, greater<ll>());

	vector<P> b(0);
	ll prev = a[0], cnt = 0;
	for(ll i=0; i<n; i++){
		if(a[i]==prev) cnt++;
		else{
			b.push_back({prev, cnt});
			cnt = 1;
		}
		prev = a[i];
	}
	b.push_back({prev, cnt});
	
	ll c[n], i=0;
	for(P bb: b) c[i++]=b.second;
	for(ll i=c.size()-1; i>0; i--) c[i-1] += c[i];

	for(P bb: b) printf("%lld %lld\n", bb.first, bb.second);

	ll d=b[0].first, ans=b[0].second;
	for(ll i=1; i<b.size(); i++){
		if(b[i-1].first-m == b[i].first){
			if(d<p) ans += b[i].second;
			else break;
		}else{}
	}
			

	return 0;
}
