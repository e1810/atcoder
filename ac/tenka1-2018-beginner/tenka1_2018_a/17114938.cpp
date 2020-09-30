#include<bits/stdc++.h>

int main(){
	std::string s;
	std::cin >> s;
	if(s.size()==3) std::reverse(s.begin(), s.end());
	std::cout << s << '
';
	return 0;
}
