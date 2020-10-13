#include<cstdio>
#include<cmath>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.3lf\n", std::log(b) / std::log(a));
	return 0;
}
