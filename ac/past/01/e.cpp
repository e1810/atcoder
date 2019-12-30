#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, q;
	scanf("%d %d", &n, &q);
	int ff[n][n], tmp[n][n];
	for(int i=0; i<n; i++)for(int j=0; j<n; j++) ff[i][j]=0, tmp[i][j]=0;

	for(int i=0; i<q; i++){
		int t;
		scanf("%d", &t);
		if(t==1){
			int a, b;
			scanf("%d %d", &a, &b);
			tmp[a-1][b-1] = 1;
		}else if(t==2){
			int a;
			scanf("%d", &a);
			for(int j=0; j<n; j++){
				if(ff[j][a-1]) tmp[a-1][j]=1;
			}
		}else{
			int a;
			scanf("%d", &a);
			for(int j=0; j<n; j++){
				if(ff[a-1][j]){
					for(int k=0; k<n; k++){
						if(ff[j][k]) tmp[a-1][k]=1;
					}
				}
			}
		}
		for(int j=0; j<n; j++) for(int k=0; k<n; k++) ff[j][k] = tmp[j][k];
	}

	for(int i=0; i<n; i++) ff[i][i] = 0;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(ff[i][j]) printf("Y");
			else printf("N");
		}
		puts("");
	}
	return 0;
}
