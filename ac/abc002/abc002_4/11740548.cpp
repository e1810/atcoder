
#include<bits/stdc++.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int path[n][n] = {0};
	for(int i=0; i<m; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		path[x-1][y-1] = path[y-1][x-1] = 1;
	}

	int ans = 0;
	std::vector<int> mem;
	for(int i=0; i<(1<<n); i++){
		mem.clear();
		for(int j=0; j<n; j++) if((i>>j)&1) {
			mem.push_back(j);
		}
		
		bool ok = true;
		for(int j=0; j<mem.size(); j++){
			for(int k=0; k<mem.size(); k++){
				if(j!=k and !path[mem[j]][mem[k]]) ok = false;
			}
		}
		if(ok) ans = std::max(ans, (int)mem.size());
	}
	
	printf("%d
", ans);
	return 0;
}
