#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;
const ll MOD = 1e9 + 7;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	
	int jik[m];
	REP(i, 0, m) jik[i] = -1;

	std::vector<int> S[n];
	std::vector<int> Sp;
	REP(i, 0, n){
		int k;
		scanf("%d", &k);
		REP(j, 0, k){
			int tmp;
			scanf("%d", &tmp);
			tmp--;
			S[i].push_back(tmp);
			if(k==1 && jik[tmp]<0){
				jik[tmp] = i;
				Sp.push_back(i);
			}
		}
	}
	//REP(i, 0, m) printf("%d ", jik[i]); puts("");
	

	int doub[m];
	REP(i, 0, m) doub[i] = -1;
	REP(i, 0, n){
		if(S[i].size()==1) doub[S[i][0]] = i;
		else if(doub[S[i][0]]<0 or doub[S[i][1]]<0){
			doub[S[i][0]] = i;
			doub[S[i][1]] = i;
			Sp.push_back(i);
		}
	}

	ll ans = 1;
	REP(i, 0, Sp.size()) ans = ans * 2 % MOD;
	printf("%lld %lld\n", ans, Sp.size());

	std::sort(Sp.begin(), Sp.end());
	for(int x: Sp) printf("%d ", x+1); puts("");
	return 0;
}
