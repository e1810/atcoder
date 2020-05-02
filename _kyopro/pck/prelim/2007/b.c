#include<stdio.h>

int main(void){
	int lcnt[4], rcnt[4], i;
	for(i=0; i<4; i++) lcnt[i] =  rcnt[i] = 0;
	
	double l, r;
	// Please type Ctrl+d at the end when testing without a judging file.
	while(scanf("%lf %lf", &l, &r)==2){
		lcnt[(l<1.1)+(l<0.6)+(l<0.2)]++;
		rcnt[(r<1.1)+(r<0.6)+(r<0.2)]++;
	}
	
	for(i=0; i<4; i++) printf("%d %d\n", lcnt[i], rcnt[i]);
	return 0;
}
