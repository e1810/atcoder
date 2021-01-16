#include<cstdio>
#include<algorithm>
#include<vector>
#include<functional>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	std::sort(a, a+n, std::greater<int>());

	std::vector<int> div;
	for(int i=1; i*i<=a[0]; i++){
		if(a[0]%i) continue;
		div.push_back(i);
		if(i*i!=a[0]) div.push_back(a[0]/i);
	}
	std::sort(div.begin(), div.end());

	int ans = 0;
	for(int x: a){
		ans += *std::lower_bound(div.begin(), div.end(), x) - x;
	}
	printf("%d\n", ans);
	return 0;
}
