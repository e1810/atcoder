#include<stdio.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	
	int able[n], cnt[n];
	for(int i=0; i<n; i++){
		able[i]=0;
		cnt[i]=1;
	}
	able[0] = 1;

	for(int i=0; i<m; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		x--; y--;

		if(able[x]){
			able[y]=1;
			if(cnt[x]==1) able[x]=0;
		}
		cnt[x]--;
		cnt[y]++;
	}
	
	int sm = 0;
	for(int i=0; i<n; i++) sm+=able[i];
	printf("%d\n", sm);
	return 0;
}
		
