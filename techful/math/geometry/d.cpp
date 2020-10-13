#include<cstdio>
#include<cmath>

int main(){
	int x, y, r;
	scanf("%d %d %d", &x, &y, &r);
	int x1, y1, x2, y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	int a = y2-y1, b = x1-x2;
	int c = -a*x1 - b*y1;

	double d = abs(a*x + b*y + c) / sqrt(a*a+b*b);
	if(d<=r) printf("%.2lf\n", d);
	else puts("Oops!");
	return 0;
}
