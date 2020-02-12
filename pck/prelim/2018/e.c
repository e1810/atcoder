#include<stdio.h>

int a, n, m;

int dfs(int k, int num, int sum){
	if(num>m) return 0;
	if(k==0){
		int i=n+1, ans = 1;
		while(--i) ans *= sum+a;
		return ans==num && num!=0;
	}

	int i, ans = 0;
	for(i=0; i<10; i++) ans += dfs(k-1, num*10+i, sum+i);
	return ans;
}

int main(void){
	scanf("%d %d %d", &a, &n, &m);
	int ans = dfs(8, 0, 0);
	printf("%d\n", ans);
	return 0;
}
	
	
