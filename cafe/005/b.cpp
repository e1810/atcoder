#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	char s[n+1], t[n+1];
	scanf("%s %s", s, t);

	int ans = 0;
	for(int i=0; i<n; i++){
		ans += std::min({abs(s[i]-t[i]), abs(s[i]+26-t[i]), abs(s[i]-t[i]-26)});
	}
	printf("%d\n", ans);
	return 0;
}

