#include<bits/stdc++.h>

int main(){
	std::string s;
	std::cin >> s;

	int l = s.size();
	long long ans = 0;
	for(int i=0; i<pow(2,(l-1)); i++){
		long long summa = 0, kou = s[0] - '0';
		for(int j=0; j<l-1; j++){
			if((i>>j)&1){
				summa += kou;
				kou = (s[j+1]-'0');
			}else{
				kou *= 10;
				kou += s[j+1]-'0';
			}
		}
		summa += kou;
		//printf("%lld\n", summa);
		ans += summa;
	}
	printf("%lld\n", ans);
	return 0;
}


