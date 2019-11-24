#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, ans=0;
	scanf("%d %d", &n, &m);
	vector<vector<vector<int>>> g(m, vector<vector<int>>(n));
	for(int i=0; i<m; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		for(int j=0; j<m; j++){
			if(i!=j){
				g[j][a-1].push_back(b-1);
				g[j][b-1].push_back(a-1);
			}
		}
	}

	for(int i=0; i<m; i++){
		vector<bool> used(n);
		for(bool f: used) f=false;
		queue<int> que;
		que.push(0);
		while(!que.empty()){
			int m = que.front();
			que.pop();
			used[m] = true;
			for(int v: g[i][m]){
				if(!used[v]) que.push(v);
			}
		}
		if(!all_of(used.begin(), used.end(), [](bool i){return i;})) ans++;
	}
	printf("%d\n", ans);
	return 0;
}
