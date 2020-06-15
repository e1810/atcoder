#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
#define REP(i,b,e) for(ll i=b;i<e;i++)

void zaatsu(std::vector<ll> &a){
	std::map<ll,ll> mp;
	for(ll i: a) mp[i]++;
	int cnt = 1;
	for(auto &p: mp) p.second = cnt++;
	for(ll &i: a) i = mp[i];
	return;
}

struct Bit {
	std::vector<ll> data;

	Bit(): data(1e6, 1e18) {}

	ll query(ll i){
		if(i<=0) return 1e18;
		return std::min(data[i], query(i-(i&-i)));
	}

	void update(ll i, ll x){
		if(i>=1e6) return;
		data[i] = std::min(data[i], x);
		update(i+(i&-i), x);
	}
};


int main(){
	int n;
	scanf("%d", &n);
	std::vector<ll> x(n), y(n), z(n);
	REP(i, 0, n) scanf("%ld %ld %ld", &x[i], &y[i], &z[i]);
	zaatsu(x); zaatsu(y); zaatsu(z);
	

	std::vector<std::tuple<ll,ll,ll>> pt(n), qry(n);
	REP(i, 0, n){
		std::get<0>(pt[i]) = std::get<0>(qry[i]) = x[i];
		std::get<1>(pt[i]) = std::get<1>(qry[i]) = y[i];
		std::get<2>(pt[i]) = std::get<2>(qry[i]) = z[i];
	}
	std::sort(pt.begin(), pt.end());
	REP(i, 0, n){
		x[i] = std::get<0>(pt[i]);
		y[i] = std::get<1>(pt[i]);
		z[i] = std::get<2>(pt[i]);
	}

	std::map<std::tuple<ll,ll,ll>, bool> mp;
	Bit tree;
	ll pos = 0;
	REP(xv, 1, n+1){
		ll beg = pos;
		while(pos<n and x[pos]<=xv) {
			std::tuple<ll,ll,ll> X(x[pos], y[pos], z[pos]);
			if(tree.query(y[pos]) < z[pos]) mp[X] = true;
			else mp[X] = false;
			pos++;
		}
		while(beg<pos){
			tree.update(y[beg], z[beg]);
			beg++;
		}
	}

	REP(i, 0, n){
		if(mp[qry[i]]) puts("Yes");
		else puts("No");
	}
}
	

