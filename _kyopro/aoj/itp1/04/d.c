#include<stdio.h>

int main(void){
	int n, max=-1e6, min=1e6;
	long sum = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		int tmp;
		scanf("%d", &tmp);
		max = tmp>max? tmp:max;
		min = tmp<min? tmp:min;
		sum += tmp;
	}
	printf("%d %d %ld\n", min, max, sum);
	return 0;
}
