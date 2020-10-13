#include<cstdio>
#include<algorithm>

int a, b, c, t;

inline double f(double t){
	return a * t * t + b * t + c;
}

int main(){
	scanf("%d %d %d %d", &a, &b, &c, &t);
	double ans = std::max<double>(c, f(t));
	double apex = -b/2.0/a;
	if(0<=apex && apex<=t){
		ans = std::max(ans, f(apex));
	}
	printf("%0.3lf\n", ans);
	return 0;
}
