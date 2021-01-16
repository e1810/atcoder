#include<cstdio>
#include<cstdint>
#include<vector>
#include<functional>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
const ll MOD = 998244353;

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
};

P composite(P a, P b){
	return P(a.first*b.first%MOD, (b.first*a.second%MOD+b.second)%MOD);
}

int main(){
	int n, q;
	scanf("%d %d", &n, &q);
	Segtree<P> seg(n, composite, P(1,0));
	for(int i=0; i<n; i++){
		P a;
		scanf("%ld %ld", &a.first, &a.second);
		seg.update(i, a);
	}

	while(q--){
		int t, a, b, c;
		scanf("%d %d %d %d", &t, &a, &b, &c);
		if(t==0) seg.update(a, P(b, c));
		else{
			P x = seg.query(a, b);
			printf("%ld\n", (x.first*c%MOD+x.second)%MOD);
		}
	}
	return 0;
}

