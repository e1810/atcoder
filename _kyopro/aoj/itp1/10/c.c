#include<stdio.h>
#include<math.h>

int main(void){
	while(1){
		double n;
		scanf("%lf", &n);
		if(n==0) break;	

		double sc[(int)n], ave = 0;
		for(int i=0; i<n; i++){
			scanf("%lf", &sc[i]);
			ave += sc[i];
		}
		ave /= n;

		double ans = 0;
		for(int i=0; i<n; i++) ans += (sc[i]-ave)*(sc[i]-ave);
		printf("%lf\n", sqrt(ans/n));
	}
	return 0;
}
	
