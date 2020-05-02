
#include<bits/stdc++.h>

int main(void){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	std::sort(a, a+n);
	
	int ans = 0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			int l=j, r=n;
			while(r-l>1){
				int mid = (l+r)/2;
				if(a[mid]<a[i]+a[j]) l = mid;
				else r = mid;
			}
			ans += l - j;
		}
	}
	printf("%d
", ans);
	return 0;
}
