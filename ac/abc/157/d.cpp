#include<bits/stdc++.h>
using namespace std;
using ll = int_fast64_t;
using P = pair<ll,ll>;

int main(){
	ll n, m, k;
	scanf("%ld %ld %ld", &n, &m, &k);
	vector<vector<ll>> fre(n, vector<ll>(0)), blo(n, vector<ll>(0));
	for(ll i=0; i<m; i++){
		ll a, b;
		scanf("%ld %ld", &a, &b);
		fre[a-1].push_back(b-1);
		fre[b-1].push_back(a-1);
	}
	for(ll j=0; j<k; j++){
		ll a, b;
		scanf("%ld %ld", &a, &b);
		fre[a-1].push_back(b-1);
		fre[b-1].push_back(a-1);
	}

	vector<ll> st(n, -1);
	ll idx = 0;
	for(ll i=0; i<n; i++){
		if(st[i]<0){
			queue<P> que;
			que.push(P(i,0));
			while(!que.empty()){
				st[i]
