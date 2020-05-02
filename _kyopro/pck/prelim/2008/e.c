#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
	const double k = M_PI / 180;
	while(1){
		double a, b, c, d;
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		if(d==-1) break;

		a*=k; b*=k; c*=k; d*=k;
		double t = sin(a)*sin(c)+cos(a)*cos(c)*cos(b-d);
		printf("%.0lf\n", 6378.1*acos(t));
	}
	return 0;
}

		
