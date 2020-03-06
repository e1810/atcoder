#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);

	int mx = 0, ans = 0;
	for(int i=0; i<n; i++){
		if(mx<a[i]){
			ans++;
			mx = a[i];
		}
	}
	printf("%d\n", ans);
	return 0;
}
