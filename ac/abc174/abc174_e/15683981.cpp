#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);

	int l=0, r=1e9+1;
	while(r-l>1){
		int mid = (l+r)/2;
		int cnt = 0;
		for(int i=0; i<n; i++){
			cnt += (a[i]+mid-1)/mid - 1;
		}
		if(cnt>k) l = mid;
		else r = mid;
	}
	printf("%d
", r);
	return 0;
}
