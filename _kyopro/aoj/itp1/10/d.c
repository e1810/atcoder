#include<stdio.h>
#include<math.h>

int main(void){
	int n;
	scanf("%d", &n);
	
	double a[n], b[n];
	for(int i=0; i<n; i++) scanf("%lf", &a[i]);
	for(int i=0; i<n; i++) scanf("%lf", &b[i]);

	double one, two, thr, inf;
	one = two = thr = inf = 0;
	for(int i=0; i<n; i++){
		double d = fabs(a[i]-b[i]);
		one += d;
		two += d*d;
		thr += d*d*d;
		inf = fmax(inf, d);
	}
	
	printf("%lf\n%lf\n%lf\n%lf\n", one, sqrt(two), pow(thr, 1.0/3.0), inf);
	return 0;
}
	
