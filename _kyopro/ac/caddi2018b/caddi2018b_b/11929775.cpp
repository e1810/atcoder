
#include<cstdio>

int n, h, w, a, b, ans;
int main(){
	scanf("%d %d %d", &n, &h, &w);
	while(n--){
		scanf("%d %d", &a, &b);
		ans += (a>=h && b>=w);
	}
	printf("%d
", ans);
	return 0;
}
