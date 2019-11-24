#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;

bool cmp(P x, P y){return x.second<y.second;}

int main(){
	ll n, m;
	scanf("%lld %lld", &n, &m);
	vector<P> ab(m);
	for(int i=0; i<m; i++) scanf("%lld %lld", &ab[i].first, &ab[i].second);
	sort(ab.begin(), ab.end(), cmp);

	ll ans = 0, h = -1;
	for(P tpl: ab){
		ll a = tpl.first-1, b = tpl.second-1;
		if(h<a){
			h = b-1;
			ans ++;
		}
	}
	printf("%lld\n", ans);
	return 0;
}
