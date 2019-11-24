#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	vector<int> p(n);
	for(int i=0; i<n; i++) scanf("%d", &p[i]);

	bool dp[10100];
	memset(dp, 0, 10100);
	dp[0] = 1;
	for(int i=0; i<n; i++){
		for(int j=10099; j>=0; j--){
			if(j+p[i]<10100 && dp[j]) dp[j+p[i]] = 1;
		}
	}

	printf("%d\n", accumulate(dp, dp+10100, 0));
	return 0;
}

