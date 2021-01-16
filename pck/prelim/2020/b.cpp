#include<cstdio>

int main(){
	int w, m, s;
	scanf("%d %d %d", &w, &m, &s);
	printf("%d\n", (s<=m)+2*(w-s<=m));
	return 0;
}
