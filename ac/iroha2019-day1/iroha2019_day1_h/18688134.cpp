#include<bits/stdc++.h>

int main(){
	std::string s;
	std::cin >> s;

	int sum = 0;
	for(char c: s) sum += c - '0';
	std::string ans;
	while(sum>9){
		ans += '9';
		sum -= 9;
	}
	ans += sum + '0';
	std::reverse(ans.begin(), ans.end());

	if(ans!=s) std::cout << ans << '
';
	else{
		int64_t add = 9;
		for(int i=ans.size()-2; ans[i]=='9'; i--){
			add *= 10;
		}
		std::cout << stol(ans) + add << '
';
	}
	return 0;
}
