#include<stdio.h>
#include<math.h>

int main(){
	int a1, b1, a2, b2;
	scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
	if(a1==a2) puts("parallel");
	else{
		double ans = (double)(b1-b2)/(a2-a1);
		printf("%d\n", (int)floor(ans));
	}
	return 0;
}
