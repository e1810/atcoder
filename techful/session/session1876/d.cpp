#include<cstdio>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d", n * m);
	while(n!=0 && m--) putchar('0');
	putchar('\n');
	return 0;
}
