#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	std::string s;
	std::cin >> s;
	std::string t;
	t = s;
	std::sort(t.begin(), t.end());

	int ans = 0;
	for(int i=0; i<n; i++){
		if(t[i]=='W') break;
		if(s[i]=='W') ans++;
	}
	printf("%d
", ans);
	return 0;
}
