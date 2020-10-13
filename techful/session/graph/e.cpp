#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)

int main(){
	int n;
	scanf("%d", &n);

	std::vector<int> links[n];
	REP(i, 0, n){
		int a, b;
		scanf("%d %d", &a, &b);
		links[a-1].push_back(b-1);
		links[b-1].push_back(a-1);
	}

	int pos = -1, seen[n] = {}, finished[n] = {};
	std::stack<int> hist;
	std::function<void(int,int)> dfs = [&](int v, int p){
		seen[v] = true;
		hist.push(v);
		for(int to: links[v]){
			if(to == p) continue;
			if(finished[to]) continue;
			if(seen[to] && !finished[to]){
				pos = to;
				return;
			}

			dfs(to, v);
			if(pos != -1) return;
		}
		hist.pop();
		finished[v] = true;
	};

	dfs(0, -1);
	bool in_cyc[n] = {};
	while(!hist.empty()){
		int p = hist.top();
		hist.pop();
		in_cyc[p] = true;
		if(p == pos) break;
	}

	int ans = 0;
	REP(i, 0, n) ans += (in_cyc[i]);
	printf("%d\n", ans);
	return 0;
}
