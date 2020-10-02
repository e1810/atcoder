#include<bits/stdc++.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	double x = a%12 * 30 + b/2.0;
	double y = b*6;
	if(x<y) x += 360;

	printf("%d\n", (int)(120*(x-y)/11));
	return 0;
}

