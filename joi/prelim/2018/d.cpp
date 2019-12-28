#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;

int main(){
	ll n;
	scanf("%lld", &n);
	vector<P> a(n);
	ll prev = -1;
	for(ll i=0; i<n; i++){
		ll tmp; scanf("%lld", &tmp);
		if(tmp==prev){
			i--;
			n--;
		}else{
			a[i] = make_pair(tmp, i);
		}
		prev = tmp;
	}
	a.resize(n);
	
	vector<ll> top(n), vall(n);
	for(ll i=0; i<n; i++){ top[i] = 0; vall[i] = 0;}
	if(a[0]>a[1]) top[0] = 1;
	for(ll i=1; i<n-1; i++){
		if(a[i-1]<a[i] && a[i]>a[i+1]) top[i] = 1;
		if(a[i-1]>a[i] && a[i]<a[i+1]) vall[i] = 1;
	}
	if(a[n-2]<a[n-1]) top[n-1] = 1;
	sort(a.begin(), a.end(), vector<P>, greater<P>());
	

	for(ll i=0; i<n; i++) printf("%lld ", top[i]);puts("");
	for(ll i=0; i<n; i++) printf("%lld ", vall[i]);puts("");
	
	for(ll i=0; i<n i++){

	

	return 0;
}
