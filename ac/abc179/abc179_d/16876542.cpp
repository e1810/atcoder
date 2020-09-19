#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)
const int MOD = 998244353;

template<typename T>
struct Fenwick {
    std::vector<T> data;
    Fenwick(int sz=1e5): data(sz+1, 0) {}

    void add(int idx, T x){
        idx++;
        while(idx<data.size()){
            data[idx] += x;
			data[idx] %= MOD;
            idx += idx & -idx;
        }
    }

    T __sum(int r){
        T ret = 0;
        while(r>0){
            ret += data[r];
			ret %= MOD;
            r -= r & -r;
        }
        return ret;
    }

    T sum(int l, int r){
		if(l>r) return 0;
        return (__sum(r+1) - __sum(l) + MOD) % MOD;
    }

};

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int l[k], r[k];
	REP(i, 0, k) scanf("%d %d", &l[i], &r[i]);

	Fenwick<ll> dp(n+1);
	dp.add(1, 1);
	REP(i, 2, n+1){
		ll a = 0;
		REP(j, 0, k){
			int L = l[j], R = r[j];
			if(i<=l[j]) L = i;
			if(i<=r[j]) R = i;
			a += dp.sum(i-R, i-L);
		}
		dp.add(i, a);
	}
	printf("%ld
", dp.sum(n, n));
}
