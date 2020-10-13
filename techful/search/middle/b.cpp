#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)

int main(){
	int n, m, l;
	scanf("%d %d %d", &n, &m, &l);
	
	int cnt[n+1] = {};
	REP(i, 0, m){
		int p;
		scanf("%d", &p);
		p--;
		cnt[std::max(0, p-l)]++;
		cnt[std::min(p+l+1, n)]--;
	}
	
	int ans = 0;
	REP(i, 0, n){
		if(cnt[i]==1) ans++;
		cnt[i+1] += cnt[i];
	}

	printf("%d\n", ans);
	return 0;
}
