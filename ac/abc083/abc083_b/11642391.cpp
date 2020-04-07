
#include<bits/stdc++.h>

int main(){
	int n, a, b, ans = 0;
	scanf("%d %d %d", &n, &a, &b);
	for(int i=1; i<=n; i++){
		int t = i, sum = 0;
		while(t){
			sum += t%10;
			t /= 10;
		}
		if(a<=sum && sum<=b) ans += i;
	}
	printf("%d
", ans);
	return 0;
}
		
