#include<cstdio>
#include<algorithm>

int main(){
	int n, t;
	scanf("%d %d", &n, &t);
	double ans = 0;
	while(n--){
		int a, b;
		scanf("%d %d", &a, &b);
		ans = std::max(ans, t*b/(double)a);
	}
	printf("%.10lf\n", ans);
	return 0;
}
