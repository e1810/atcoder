#include<stdio.h>
#include<math.h>
#define PI 3.1415926535

int main(){
	double a, b, x;
	scanf("%lf %lf %lf", &a, &b, &x);
	if(x > a*a*b/2.0){
		double rad = atan((b-(2*x/a/a-b)) / a);
		printf("%lf\n", rad/PI * 180);
	}else{
		double rad = atan(b / (2*x/b/a));
		printf("%lf\n", rad/PI * 180);
	}
	return 0;
}
