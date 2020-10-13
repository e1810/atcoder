#include<cstdio>

int main(){
	int n;
	scanf("%d", &n);
	int ans = 0;
	while(n!=32){
		ans++;
		if(n%10==0) ans++;
		n++;
	}
	printf("%d\n", ans);
	return 0;
}

