#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int xy[n][2];
	for(int i=0; i<n; i++) scanf("%d %d", &xy[i][0], &xy[i][1]);
	
	double ans = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int a = xy[i][0], b = xy[i][1], c = xy[j][0], d = xy[j][1];
			ans = fmax(ans, sqrt((a-c)*(a-c)+(b-d)*(b-d)));
		}
	}
	
	printf("%lf\n", ans);
	return 0;
}
