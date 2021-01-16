#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;
using P = std::pair<int,int>;
const ll MOD = 998244353;

struct FenwickTree {
    std::vector<ll> data;
    FenwickTree(int sz=1e5): data(sz+1, 0) {}

    void add(int idx, ll x){
        idx++;
        while(idx<data.size()){
            data[idx] += x;
			data[idx] %= MOD;
            idx += idx & -idx;
        }
    }

    ll __sum(int r){
        ll ret = 0;
        while(r>0){
            ret += data[r];
			ret %= MOD;
            r -= r & -r;
        }
        return ret;
    }

    ll sum(int l, int r){
        return (__sum(r) - __sum(l) + MOD) % MOD;;
    }

};


int main(){
	int n;
	scanf("%d", &n);
	P aa[n];
	ll b[n];
	REP(i, 0, n){
		scanf("%ld", &b[i]);
		aa[i].first = b[i];
		aa[i].second = i;
	}
	std::sort(aa, aa+n);

	ll a[n], cnt = -1, prev = -1;
	for(auto [k,v]: aa){
		if(k!=prev) cnt++;
		a[v] = cnt;
		prev = k;
	}

	ll ans = 0;
	FenwickTree bit1(200100), bit2(200100), bit3(200100), bit4(200100);
	REP(i, 0, n){
		bit1.add(a[i], b[i]);
		ll adx = bit1.sum(a[i]+1, 200100);
		adx = (adx + b[i]*bit3.sum(a[i]+1, 200100) % MOD) % MOD;
		bit2.add(a[i], adx);
		ans = (ans + bit2.sum(a[i]+1, 200100)) % MOD;

		bit3.add(a[i], 1);
		bit4.add(a[i], bit3.sum(a[i]+1, 200100));
		ans = (ans + b[i]*bit4.sum(a[i]+1, 200100)%MOD) % MOD;
	}

	printf("%ld\n", ans);
	return 0;
}


