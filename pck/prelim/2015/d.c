#include<stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	
	int i, a[n], b[n];
	for(i=0; i<n; i++){
		a[i] = 1;
		b[i] = 0;
	}

	int m, tmp;
	scanf("%d", &m);
	for(i=0; i<m; i++){
		scanf("%d", &tmp);
		a[tmp-1]--;
	}

	scanf("%d", &m);
	for(i=0; i<m; i++){
		scanf("%d", &tmp);
		b[tmp-1]++;
	}

	scanf("%d", &m);
	for(i=0; i<m; i++){
		scanf("%d", &tmp);
		a[tmp-1]++;
		b[tmp-1]++;
	}

	int ans = 0;
	for(i=0; i<n; i++){
		if(a[i]==2 || b[i]==2) ans++;
	}
	printf("%d\n", ans);
	return 0;
}

