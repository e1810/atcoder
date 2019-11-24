#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	bool net[n][n];
	memset(net, 0, n*n);
	for(int i=0; i<m; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		net[x-1][y-1] = true;
		net[y-1][x-1] = true;
	}
	
	int maxi = 0;
	for(int i=0; i<(1<<n); i++){
		vector<int> tmp(0);
		int cnt = 0;
		for(int j=0; j<n; j++){
			if((i>>j)&1){
				tmp.push_back(j);
				cnt ++;
			}
		}

		bool flag = 1;
		int l = tmp.size();
		for(int j=0; j<l-1; j++){
			for(int k=j+1; k<l; k++){
				if(!net[tmp[j]][tmp[k]]) flag = 0;
			}
		}
		if(flag) maxi = max(maxi, cnt);
	}
	printf("%d\n", maxi);
	return 0;
}
