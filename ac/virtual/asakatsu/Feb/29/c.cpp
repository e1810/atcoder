#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> t(n);
	for(int i=0; i<n; i++) scanf("%d", &t[i]);

	int ans = 1e11;
	for(int i=0; i<(1<<n); i++){
		int taka=0, fre=0;
		for(int j=0; j<n; j++){
			if((i>>j)&1) taka += t[j];
			else fre += t[j];
		}
		ans = std::min(ans, std::max(taka, fre));
	}
	printf("%d\n", ans);
	return 0;
}
