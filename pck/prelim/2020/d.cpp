#include<cstdio>
#include<algorithm>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	std::reverse(a, a+n);
	int ans = 0, max = 0;
	for(int i=0; i<n; i++){
		if(max<a[i]){
			ans++;
			max = a[i];
		}
	}
	printf("%d\n", ans);
	return 0;
}
