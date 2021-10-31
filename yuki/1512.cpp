#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)

int main(){
	int n;
	std::cin >> n;
	std::vector<std::string> ss;
	REP(i, 0, n){
		std::string s;
		std::cin >> s;
		bool ok = true;
		REP(j, 0, s.size()-1){
			if(s[j]>s[j+1]) ok = false;
		}
		if(ok) ss.push_back(s);
	}
	n = ss.size();

	int self[26] = {}, links[26][26] = {};
	REP(i, 0, n){
		int fr = ss[i].front()-'a', bk = ss[i].back()-'a';
		if(fr==bk){
			self[fr] += ss[i].size();
		}else{
			links[fr][bk] = std::max<int>(links[fr][bk], ss[i].size());
		}
	}

	int dist[26] = {};
	REP(i, 0, 26) REP(j, i+1, 26) {
		dist[j] = std::max(dist[j], dist[i] + self[i] + links[i][j]);
	}
	dist[25] += self[25];

	int ans = 0;
	REP(i, 0, 26) ans = std::max(ans, dist[i]);
	printf("%d\n", ans);
	return 0;
}

	
	
