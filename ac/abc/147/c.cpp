#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int main(){
	int n; scanf("%d", &n);
	
	vector<vector<P>> xy(n, vector<P>(0));
	for(int i=0; i<n; i++){
		int a; scanf("%d", &a);
		for(int j=0; j<a; j++){
			int x, y;
			scanf("%d %d", &x, &y);
			xy[i].push_back(make_pair(x-1, y));
		}
	}

	int ans = 0;
	for(int i=0; i<(1<<n); i++){
		vector<bool> hone(n), evil(n);
		for(int j=0; j<n; j++) hone[j]=0, evil[j]=0;

		int tmp=0;
		for(int j=0; j<n; j++){
			if((i>>j)&1){
				tmp++;
				if(evil[j]) tmp = -1e9;
				else hone[j] = 1;
				for(P pr: xy[j]){
					if(pr.second){
						if(!evil[pr.first]) hone[pr.first] = 1;
						else tmp = -1e9;
					}else{
						if(!hone[pr.first]) evil[pr.first] = 1;
						else tmp = -1e9;
					}
				}
			}else{
				if(hone[j]) tmp=-1e9;
				else evil[j] = 1;
			}
		}
		ans = max(ans, tmp);
	}
	printf("%d\n", ans);
	return 0;
}
