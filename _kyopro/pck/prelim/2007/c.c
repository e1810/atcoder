#include<stdio.h>

int main(void){

	//------ to make an array that judges prime number ------
	int is_prime[10010], i, j;
	for(i=0; i<10010; i++) is_prime[i] = 1;
	for(i=2; i<10010; i++){
		if(is_prime[i]){
			for(j=2; i*j<10010; j++) is_prime[i*j] = 0;
		}
	}	

	//------ main program ------
	int n;
	// Please type Ctrl+d at the end when testing without a judging file.
	while(scanf("%d", &n)!=EOF){
		for(; n>0; n--){
			if(is_prime[n-2] && is_prime[n]){
				printf("%d %d\n", n-2, n);
				break;
			}
		}
	}
	return 0;
}

