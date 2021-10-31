#include<cstdio>
#include<cstdint>

int main(){
	int n;
	scanf("%d", &n);
	if(n&1) puts("1");
	else printf("%d\n", n/2+1);
	return 0;
}

