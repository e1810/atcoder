#include<bits/stdc++.h>
using ll = int64_t;

struct SegTree {
	int sz;
	std::vector<ll> data;
	SegTree(int n){
		sz = 1;
		while(sz < n) sz <<= 1;
		data.assign(2*sz, 0);
	}

	void add(int idx, ll x){
		idx += sz;
		data[idx] += x;
		while(idx>>=1){
			data[idx] = data[2*idx] + data[2*idx+1];
		}
	}

	ll sum(int l, int r){
		ll resL = 0, resR = 0;
		for(l+=sz, r+=sz; l<r; l>>=1, r>>=1){
			if(l&1) resL = resL + data[l++];
			if(r&1) resR = resR + data[--r];
		}
		return resL + resR;
	}
};

int main(){
	int n, q;
	scanf("%d %d", &n, &q);

	SegTree seg(n);
	for(int i=0; i<n; i++){
		scanf("%ld", &seg.data[seg.sz+i]);
	}
	for(int i=seg.sz-1; i>0; i--){
		seg.data[i] = seg.data[2*i] + seg.data[2*i+1];
	}

	while(q--){
		int t;
		scanf("%d", &t);
		if(t==0){
			int p, x;
			scanf("%d %d", &p, &x);
			seg.add(p, x);
		}else{
			int l, r;
			scanf("%d %d", &l, &r);
			printf("%ld\n", seg.sum(l, r));
		}
	}
	return 0;
}
