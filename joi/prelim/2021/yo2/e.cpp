#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;
using P = std::pair<int,int>;


int main(){
	ll n, m;
	scanf("%ld %ld", &n, &m);
	int t[n];
	REP(i, 0, n) scanf("%d", &t[i]);

	std::vector<P> info[n];
	REP(i, 0, m){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		info[a-1].emplace_back(b-1, c-1);
	}

	REP(i, 0, 1<<n) {
		bool ok = true;
		REP(j, 0, n){
			bool spy = (i>>j)&1;
			if(t[j]==1 && !spy) ok = false;
			if(t[j]==2 && spy) ok = false;
	
			if(spy){
				for(auto [b,c]: info[j]){
					if((((i>>b)&1)==1) && (((i>>c)&1)==0)) ok = false;
				}
			}/*else{
				for(auto [b,c]: info[j]){
					if((((i>>b)&1)==0) || (((i>>c)&1)==1)) ok = false;
				}
			}*/
		}
		if(ok){
			REP(j, 0, n) printf("%d\n", 2-((i>>j)&1));
			return 0;
		}
	}
	puts("-1");
	return 0;
}




