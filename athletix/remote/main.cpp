#include<iostream>
#include<string>
#include<map>

int main(){
	std::string s;
	std::cin >> s;

	std::map<char,int> mp;
	char top = '9';
	for(char c: s){
		mp[c]++;
		if(c!='0') top = std::min(top, c);
	}

	std::string ans = std::to_string(top-'0');
	mp[top]--;
	for(auto p: mp){
		ans += std::string(p.second, p.first);
	}
	std::cout << ans << '\n';
	return 0;
}
