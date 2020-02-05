#include<bits/stdc++.h>

int main(){
	std::string s;
	std::cin >> s;

	long ans=0, l=s.size()-1;
	for(int i=0; i<(1<<l); i++){
		long sm = 0, kou = s[0] - '0';
		for(int j=0; j<l; j++){
			if((i>>j)&1){
				sm += kou;
				kou = (s[j+1]-'0');
			}else{
				kou *= 10;
				kou += s[j+1]-'0';
			}
		}
		ans += sm+kou;
	}
	printf("%ld\n", ans);
	return 0;
}


