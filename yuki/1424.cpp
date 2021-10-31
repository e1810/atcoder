#include<cstdio>
#include<cstdint>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);

		if(c > b && 2*b < a){
			a = (c-b) / a * a;
		}else{
			
		printf("%d %d %d\n", a, b, c);
	}
	return 0;
}

