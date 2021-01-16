#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)
using P = std::pair<int,int>;

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	REP(i, 0, n) scanf("%d", &a[i]);

	int ans = n;
	REP(i, 0, n) REP(j, 0, 3) {
		std::vector<P> col;
		int t, b, prev = a[0], cnt = 0;
		if(i==0) prev = j+1;

		REP(k, 0, n){
			int c = a[k];
			if(k==i){
				c = j+1;
				t = b = col.size();
			}

			if(prev==c) cnt++;
			else{
				col.emplace_back(prev, cnt);
				cnt = 1;
			}
			prev = c;
		}
		col.emplace_back(prev, cnt);
		
		while(col[t].first==col[b].first){
			if(t==b and col[t].second<4) break;
			if(t!=b and col[t].second+col[b].second<4) break;
			t--;
			b++;
			if(t<0 && b>=col.size()) break;
		}

		int tmp = 0;
		REP(k, 0, t+1) tmp += col[k].second;
		REP(k, b, col.size()) tmp += col[k].second;
		if(t==b) tmp -= col[t].second;
		ans = std::min(ans, tmp);
	}

	printf("%d\n", ans);
	return 0;
}


			 

