#include<iostream>

int main(void){
	int n, i;
	int_fast64_t a, b;
	for(i=0; i<n; i++){
		scanf("%ld %ld", &a, &b);
		printf("%ld\n", a/b);
	}
	return 0;
}
