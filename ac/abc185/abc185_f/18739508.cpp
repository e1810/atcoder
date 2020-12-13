#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

const int MOD = 1e9+7;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};


template<typename T>
struct Segtree {
    using F = std::function<T(T,T)>;
    const T e;
    F func;
    size_t sz = 1;
    std::vector<T> data;
    Segtree(int n, F func, T e): func(func), e(e){
        while(sz<n) sz <<= 1;
        data.assign(sz*2, e);
    }

    void set(size_t idx, T val){data[sz+idx] = val;}
    void build(){
        for(int i=sz-1; i>0; i--){
            data[i] = func(data[2*i], data[2*i+1]);
        }
    }

    void update(size_t idx, T val){
        idx += sz;
        data[idx] = val;
        while(idx>>=1){
            data[idx] = func(data[idx*2], data[idx*2+1]);
        }
    }

    T query(size_t l, size_t r){
        T resL = e, resR = e;
        for(l+=sz, r+=sz; l<r; l>>=1, r>>=1){
            if(l&1) resL = func(resL, data[l++]);
            if(r&1) resR = func(data[--r], resR);
        }
        return func(resL, resR);
    }

    T operator[](size_t idx){return data[sz+idx];}
};


int main(){
	int n, q;
	scanf("%d %d", &n, &q);
	Segtree<ll> seg(n, [](ll x, ll y){return x^y;}, 0);
	REP(i, 0, n){
		ll tmp;
		scanf("%ld", &tmp);
		seg.set(i, tmp);
	}
	seg.build();

	while(q--){
		int t, x, y;
		scanf("%d %d %d", &t, &x, &y);
		if(t==1) seg.update(x-1, seg[x-1]^y);
		else printf("%ld
", seg.query(x-1, y));
	}
	return 0;
}
