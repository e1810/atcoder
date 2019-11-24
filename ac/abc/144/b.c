#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<10; i++){
		for(int j=1; j<10; j++){
			if(i*j==n){
				puts("Yes");
				return 0;
			}
		}
	}
	puts("No");
	return 0;
}
