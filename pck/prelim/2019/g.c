#include<stdio.h>

int gcd(int a, int b){
	int tmp;
	if(a>b){
		tmp = a;
		a = b;
		b = a;
	}
	while(b){
		tmp = a;
		a = b;
		b = tmp%b;
	}
	return a;
}

int lcm(int a, int b){
	return a*b / gcd(a, b);
}


int main(void){
	int n; scanf("%d", &n);
	int a[n], i;
	for(i=0; i<n; i++) scanf("%d", &a[i]);

	int ans = 0;
	for(i=1; i<(1<<n); i++){
		int tmp=1, j;
		for(j=0; j<n; j++){
			if((i>>j)&1) tmp = lcm(tmp, a[j]);
		}
		int can = 1;
		for(j=0; j<n; j++){
			if(((i>>j)&1)==0 && tmp%a[j]==0) can = 0;
		}
		ans += can;
	}

	printf("%d\n", ans);
	return 0;
}





