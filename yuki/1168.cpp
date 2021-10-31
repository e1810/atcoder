#include<bits/stdc++.h>

int main(){
	int a;
	scanf("%d", &a);
	for(int i=0; i<99; i++){
		int tmp = 0;
		while(a){
			tmp += a%10;
			a /= 10;
		}
		a = tmp;
	}
	printf("%d\n", a);
	return 0;
}
