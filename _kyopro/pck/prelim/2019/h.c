#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	return (*(int (*)[2])a)[0] - (*(int (*)[2])b)[0];
}

int main(void){
	int n, l;
	scanf("%d %d", &n, &l);

	int i, k[2][n+2];
	k[0][0] = 0;
	k[0][1] = 0;
	k[n+1][0] = l+1;
	k[n+1][1] = 1;
	for(i=1; i<=n; i++) scanf("%d %d", &k[i][0], &k[i][1]);

	qsort(k, n+2, sizeof(k[0]), cmp);

	int ans = 0, limit = 0;
	for(i=1; i<n+2; i++){
		if(k[i][1]){
			limit = k[i][0];
		}else{
			ans += k[i][0]-limit-1;
			limit++;
		}
	}
	while(--i){
		if(k[i][1]) ans += l-k[i][0]-(n-i);
		else break;
	}

	printf("%d\n", ans);
}
		
