#include<stdio.h>

int main(void){
	while(1){
		int t, n;
		scanf("%d", &t);
		if(t==0) break;
		scanf("%d", &n);

		int sm = 0, i;
		for(i=0; i<n; i++){
			int s, f;
			scanf("%d %d", &s, &f);
			sm += f - s;
		}
		if(sm-t<0) printf("%d\n", t-sm);
		else puts("OK");
	}
	return 0;
}	
	

