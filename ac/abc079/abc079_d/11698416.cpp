
#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	int h, w;
	scanf("%d %d", &h, &w);
	
	ll c[10][10];
	for(int i=0; i<100; i++) scanf("%ld", &c[i/10][i%10]);
	for(int k=0; k<10; k++) for(int i=0; i<10; i++) for(int j=0; j<10; j++){
		c[i][j] = std::min(c[i][j], c[i][k]+c[k][j]);
	}

	ll ans = 0;
	for(int i=0; i<h*w; i++){
		int x;
		scanf("%d", &x);
		if(x>=0) ans += c[x][1];
	}
	printf("%ld
", ans);
	return 0;
}
