#include<cstdio>
#include<cstdint>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", (a|b) + (a&b));
	return 0;
}
