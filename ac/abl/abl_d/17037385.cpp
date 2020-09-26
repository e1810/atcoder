#include<bits/stdc++.h>
#include<atcoder/segtree>
#define REP(i,b,e) for(int i=b; i<e; i++)

int op(int a, int b){
	return std::max(a, b);
}

int e(){
	return 0;
}

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	atcoder::segtree<int, op, e> seg(300100);
	REP(i, 0, n){
		int a;
		scanf("%d", &a);
		int l = std::max(0, a-k);
		int r = std::min(300100, a+k+1);
		int cnt = seg.prod(l, r);
		if(cnt+1>seg.get(a)) seg.set(a, cnt+1);
	}
	printf("%d
", seg.all_prod());
	return 0;
}
