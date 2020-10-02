#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using P = std::pair<int,int>;

struct Segtree {
	int len, n = 1;
	std::vector<P> tree;
	
	Segtree(int len): len(len) {
		while(n<len) n *= 2;
		tree.resize(2*n, P(0,0));
		REP(i, n, 2*n) tree[i] = P(0, i-n);
	}

	void update(int idx, int value){
		int i = n + idx;
		tree[i].first = value;
		while(i>>=1){
			if(tree[2*i].first > tree[2*i+1].first){
				tree[i] = tree[2*i];
			}else{
				tree[i] = tree[2*i+1];
			}
		}
	}

	P query(int left, int right){
		P x, y;
		x = y = P(0, 0);
		for(left+=n, right+=n; left<right; left>>=1, right>>=1){
			if(left&1){
				if(x.first < tree[left].first) x = tree[left];
				left++;
			}
			if(right&1){
				right--;
				if(y.first < tree[right].first) y = tree[right];
			}
		}
		if(x.first > y.first) return x;
		else return y;
	}
};

	

int main(){
	int n;
	scanf("%d", &n);
	int psg[n], cnt = 0;
	Segtree seg(300000);
	REP(i, 0, n){
		scanf("%d", &psg[i]);
		REP(j, 0, psg[i]){
			int c;
			scanf("%d", &c);
			seg.update(cnt++, c);
		}
	}

	long long ans = 0;
	int left, right;
	left = right = cnt;
	for(int i=n-1; i>=0; i--){
		left -= psg[i];
		P p = seg.query(left, right);
		ans += p.first;
		seg.update(p.second, 0);
	}
	printf("%lld\n", ans);
	return 0;
}
