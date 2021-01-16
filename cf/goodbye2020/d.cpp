#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;
using P = std::pair<ll,ll>;


int main(){
	int qt;
	scanf("%d", &qt);
	
	
	while(qt--){
		int n;
		scanf("%d", &n);

		ll ans = 0;
		P ws[n];
		REP(i, 0, n){
			scanf("%lld", &ws[i].first);
			ans += ws[i].first;
		}

		REP(i, 0, n-1){
			int a, b;
			scanf("%d %d", &a, &b);
			ws[a-1].second++;
			ws[b-1].second++;
		}
		std::sort(ws, ws+n);

		printf("%lld ", ans);
		int pos = n - 1;
		while(ws[pos].second==1) pos--;
		REP(k, 2, n){
			if(pos<0){
				printf("%lld\n", ans);
				continue;
			}
			ans += ws[pos].first;
			ws[pos].second--;
			while(ws[pos].second==1){
				pos--;
			}
			printf("%lld ", ans);
		}
		puts("");
	}
	return 0;
}
		

		

