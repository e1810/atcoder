#include<bits/stdc++.h>

int main(){
	std::string s;
	std::cin >> s;

	int ans = 0, cnt = 0, r = s.size()-1;
	for(int l=0; true; l++){
		if(l>=r){
			if(s[r]!='x') ans += cnt;
			break;
		}
		if(s[l]=='x') cnt++;
		else{
			while(s[r]=='x'){
				r--;
				cnt--;
			}
			ans += abs(cnt);
			cnt = 0;
			if(s[l]!=s[r]){
				puts("-1");
				return 0;
			}
			r--;
		}
	}
	printf("%d
", ans);
	return 0;
}
