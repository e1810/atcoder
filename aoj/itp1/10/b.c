#include<stdio.h>
#include<math.h>

int main(void){
	double a, b, t;
	scanf("%lf %lf %lf", &a, &b, &t);
	t *= M_PI / 180.0;

	double s = a*b*sin(t)/2.0;
	double l = a + b + sqrt(a*a + b*b - 2*a*b*cos(t));
	double h = s/a*2;

	printf("%lf %lf %lf\n", s, l, h);
	return 0;
}
