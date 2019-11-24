#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int mn = n;
	for(int i=0; i<=n; i++){
		int cnt = 0, tmp = i;
		while(tmp){
			cnt += tmp%6;
			tmp /= 6;
		}
		tmp = n-i;
		while(tmp){
			cnt += tmp%9;
			tmp /= 9;
		}
		mn = cnt<mn? cnt:mn;
	}
	printf("%d\n", mn);
	return 0;
}
