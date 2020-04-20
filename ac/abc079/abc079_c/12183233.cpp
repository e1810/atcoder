
#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	int d = n%10; n /= 10;
	int c = n%10; n /= 10;
	int b = n%10; n /= 10;
	int a = n;
	
	if(a+b+c+d==7) printf("%d+%d+%d+%d=7
", a, b, c, d);
	else if(a+b+c-d==7) printf("%d+%d+%d-%d=7
", a, b, c, d);
	else if(a+b-c+d==7) printf("%d+%d-%d+%d=7
", a, b, c, d);
	else if(a+b-c-d==7) printf("%d+%d-%d-%d=7
", a, b, c, d);
	else if(a-b+c+d==7) printf("%d-%d+%d+%d=7
", a, b, c, d);
	else if(a-b+c-d==7) printf("%d-%d+%d-%d=7
", a, b, c, d);
	else if(a-b-c+d==7) printf("%d-%d-%d+%d=7
", a, b, c, d);
	else if(a-b-c-d==7) printf("%d-%d-%d-%d=7
", a, b, c, d);
	return 0;
}
