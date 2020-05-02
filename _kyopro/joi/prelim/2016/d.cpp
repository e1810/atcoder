#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, t, q;
	scanf("%lld %lld %lld", &n, &t, &q);

	vector<ll> dist(n+2);
	dist[0] = -3e18;
	dist[n+1] = 3e18;
	vector<ll> vect(n+2);
	vect[0] = 1;
	vect[n+1] = 2;

	vector<ll> talkin(0);
	vector<ll> talkinin(n+2);
	talkinin[0] = 0;

	ll inin = 0;
	bool flag=false;
	for(ll i=1; i<n+1; i++){
		scanf("%lld %lld", &dist[i], &vect[i]);
		if(vect[i-1]==1 and vect[i]==2)talkin.push_back((dist[i-1]-dist[i])/2+dist[i]);
		if(vect[i-1]==2 and vect[i]==1) inin++;
		
		talkinin[i] = inin;
	}
	if(vect[n]==1)talkin.push_back((dist[n]-dist[n+1])/2+dist[n+1]);
	for(int i=0; i<n+2; i++) talkinin[i] = talkin[talkinin[i]];
	
	vector<ll> imp(q);
	for(int i=0; i<q; i++) scanf("%lld", &imp[i]);
	for(int i=0; i<q; i++){
		ll m = imp[i];
		if(vect[m]==1) cout << min(dist[m]+t, talkinin[m]) << endl;
		else cout << max(dist[m]-t, talkinin[m]) << endl;
	}
	return 0;
}


