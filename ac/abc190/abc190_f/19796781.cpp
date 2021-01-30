#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(int i=b; i<e; i++)

template<typename T>
struct FenwickTree {
    std::vector<T> data;
    FenwickTree(int sz=1e5): data(sz+1, 0) {}

    void add(int idx, T x){
        idx++;
        while(idx<data.size()){
            data[idx] += x;
            idx += idx & -idx;
        }
    }

    T __sum(int r){
        T ret = 0;
        while(r>0){
            ret += data[r];
            r -= r & -r;
        }
        return ret;
    }

    T query(int l, int r){
        return __sum(r) - __sum(l);
    }

};

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	REP(i, 0, n) scanf("%d", &a[i]);

	ll ans = 0;
	FenwickTree<ll> bit(n);
	REP(i, 0, n){
		ans += bit.query(a[i]+1, n);
		bit.add(a[i], 1);
	}
	printf("%ld
", ans);

	FenwickTree<ll> bit2(n);
	REP(i, 0, n-1){
		ans += bit.query(a[i]+1, n);
		ans -= bit.query(0, a[i]);
		ans += bit2.query(a[i]+1, n);
		ans -= bit2.query(0, a[i]);
		bit.add(a[i], -1);
		bit2.add(a[i], 1);
		printf("%ld
", ans);
	}
	return 0;
}
