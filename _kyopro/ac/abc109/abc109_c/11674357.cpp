
#include<bits/stdc++.h>

int main(){
	int n, x;
	scanf("%d %d", &n, &x);
	std::vector<int> a({x});
	for(int i=0; i<n; i++){
		scanf("%d", &x);
		a.push_back(x);
	}
	int ans = 0;
	std::sort(a.begin(), a.end(), std::greater<int>());
	for(int i=0; i<n; i++) ans = std::__gcd(ans, a[i]-a[i+1]);
	printf("%d
", ans);
}
