#include<bits/stdc++.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	for(int i=1; i<=127; i++){
		if(i%3==a and i%5==b and i%7==c){
			printf("%d
", i);
		}
	}
	return 0;
}
