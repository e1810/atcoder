#include<stdio.h>

int main(void){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int ans = 0;
	for(int i=0; i<=d; i++){
		for(int j=0; j<=d; j++){
			if(d-a*i-b*j>=0 && (d-a*i-b*j)%c==0) ans++;
		}
	}

	printf("%d\n", ans);
	return 0;
}
