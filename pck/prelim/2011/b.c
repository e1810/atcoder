#include<stdio.h>

typedef struct sweet{
	int num, p, q, r, col;
} Sweet;

int main(void){
	while(1){
		int n, i;
		scanf("%d", &n);
		if(n==0) break;
		
		Sweet sweets[n];
		for(i=0; i<n; i++){
			int num, p, q, r;
			scanf("%d %d %d %d", &sweets[i].num, &sweets[i].p, &sweets[i].q, &sweets[i].r);
			sweets[i].col = sweets[i].p*4 + sweets[i].q*9 + sweets[i].r*4;
		}

		int p, q, r, c, cnt=0;
		scanf("%d %d %d %d", &p, &q, &r, &c);
		for(i=0; i<n; i++){
			Sweet sw = sweets[i];
			if(sw.p<=p && sw.q<=q && sw.r<=r && sw.col<=c){
				printf("%d\n", sw.num);
				cnt++;
			}
		}
		if(cnt==0) puts("NA");
	}
	return 0;
}
