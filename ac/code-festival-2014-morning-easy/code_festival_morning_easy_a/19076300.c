#include<stdio.h>
#include<stdint.h>

int main(){
	int n, prev;
	scanf("%d %d", &n, &prev);
	int64_t sum = 0, tmp;
	for(int i=0; i<n-1; i++){
		scanf("%ld", &tmp);
		sum += tmp - prev;
		prev = tmp;
	}
	printf("%.10lf
", sum / (double) (n-1));
	return 0;
}
