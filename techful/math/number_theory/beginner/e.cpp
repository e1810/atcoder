#include<iostream>
#include<string>
#include<vector>
#include<cstdint>

const int64_t MOD = 1e9 + 7;

int main(){
	int n;
	std::cin >> n;
	std::string a;
	std::vector<int> x(1000, 0);

	while(n--){
		std::cin >> a;
		for(int i=1; i<=a.size(); i++){
			x[1000-i] ^= a[a.size()-i] - '0';
		}
	}

	int64_t ans = 1, b = 2;
	for(int i=0; i<1000; i++){
		if(x[999-i]) ans = ans * b % MOD;
		b = b * b % MOD;
	}
	std::cout << ans << '\n';

	return 0;
}


