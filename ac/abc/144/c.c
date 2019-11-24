#include<stdio.h>
#include<math.h>

int main(){
	long long n;
	scanf("%lld", &n);
	for(int i=(long long)sqrt(n); i>0; i--){
		if(n%i==0){
			printf("%lld\n", n/i+i-2);
			return 0;
		}
	}
	return 0;
}
