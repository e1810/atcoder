#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int64_t m = 1;
	for(int i=0; i<n; i++) m <<= 1;
	std::string itg = std::to_string(m);
	
	std::string ans = "0.";
	for(int i=itg.size(); i<n; i++) ans += "0";
	ans += itg;
	
	std::cout << ans << '\n';
	return 0;
}
