#include<bits/stdc++.h>
using P = std::pair<int,int>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define fi first
#define se second

int main(){
	int n, d, k;
	scanf("%d %d %d", &n, &d, &k);
	std::vector<P> lr(d), st(k);
	REP(i, 0, d) scanf("%d %d", &lr[i].fi, &lr[i].se);
	
	REP(i, 0, k){
		int now, goal, ans = 0;
		scanf("%d %d", &now, &goal);
		for(auto [l, r]: lr){
			ans++;
			if(l<=now && now<=r){
				if(now<goal){
					if(goal<r) now = goal;
					else now = r;
				}
				if(goal<now){
					if(l<goal) now = goal;
					else now = l;
				}
				if(goal==now){
					printf("%d
", ans);
					break;
				}
			}
		}
	}			
	return 0;
}
