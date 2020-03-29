#include<stdio.h>

int main(void){
	int n;
	scanf("%d", &n); getchar();
	int tob[n], tow[n], bans=0, wans=0;
	for(int i=0; i<n; i++) tob[i] = tow[i] = (getchar()=='#');
	for(int i=1; i<n; i++){
		if(tob[i-1] && !tob[i]){
				bans++;
				tob[i] = 1;
		}
	}
	for(int i=n-2; i>=0; i--){
		if(tow[i] && !tow[i+1]){
			wans++;
			tow[i] = 0;
		}
	}

	int ans = (bans<wans? bans:wans);
	printf("%d\n", ans);
	return 0;
}
