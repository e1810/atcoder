#include<bits/stdc++.h>

int main(){
	int n, m; scanf("%d %d", &n, &m);
	std::vector<int> a(n), b(n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	for(int i=0; i<n; i++) scanf("%d", &b[i]);
	int cnt = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cnt += a[i]+b[j]==m;
		}
	}
	printf("%d\n", cnt);
	return 0;
}

