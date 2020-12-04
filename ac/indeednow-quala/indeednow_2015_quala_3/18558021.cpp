#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)
const int MAX = 1e6;

int main(){
	int n;
	scanf("%d", &n);
	int cnt[MAX+1] = {};
	REP(i, 0, n){
		int a;
		scanf("%d", &a);
		cnt[MAX-a]++;
	}
	REP(i, 0, MAX) cnt[i+1] += cnt[i];

	int q;
	scanf("%d", &q);
	while(q--){
		int k;
		scanf("%d", &k);
		auto pos = std::upper_bound(cnt, cnt+MAX+1, k);
		if(pos==cnt+MAX) puts("0");
		else printf("%ld
", cnt+MAX+1-pos);
	}
	return 0;
}
