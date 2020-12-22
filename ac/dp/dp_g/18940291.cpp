#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int n, m;
	scanf("%d %d", &n, &m);

	std::vector<int> links[n];
	int in[n] = {};
	while(m--){
		int a, b;
		scanf("%d %d", &a, &b);
		links[a-1].push_back(b-1);
		in[b-1]++;
	}

	std::vector<int> topo;
	for(int i=0; i<n; i++){
		if(in[i]==0) topo.push_back(i);
	}

	for(int i=0; i<topo.size(); i++){
		for(int to: links[topo[i]]){
			if(--in[to]==0) topo.push_back(to);
		}
	}
	
	int max[n] = {};
	for(int frm: topo){
		for(int to: links[frm]){
			max[to] = std::max(max[to], max[frm]+1);
		}
	}

	int ans = 0;
	REP(i, 0, n) ans = std::max(ans, max[i]);
	printf("%d
", ans);
	return 0;
}
