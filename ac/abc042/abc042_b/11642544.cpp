
#include<bits/stdc++.h>

int main(){
	int n, l;
	scanf("%d %d", &n, &l);
	std::vector<std::string> a(0);
	for(int i=0; i<n; i++){
		std::string s;
		std::cin >> s;
		a.push_back(s);
	}
	std::sort(a.begin(), a.end());
	for(int i=0; i<n; i++) std::cout << a[i];
	std::cout << std::endl;
}
