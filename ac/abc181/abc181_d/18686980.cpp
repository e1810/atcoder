#include<bits/stdc++.h>

int main(){
	std::string s;
	std::cin >> s;
	int n = s.size();

	int cnt[10] = {};
	for(char c: s) cnt[c-'0']++;

	if(n==1){
		if((s[0]-'0')%8==0) puts("Yes");
		else puts("No");
	}else if(n==2){
		if(((s[0]-'0')*10+(s[1]-'0'))%8==0) puts("Yes");
		else if(((s[1]-'0')*10+(s[0]-'0'))%8==0) puts("Yes");
		else puts("No");
	}else{
		for(int i=0; i<1000; i+=8){
			int tmp[10] = {};
			tmp[i/100]++;
			tmp[i/10%10]++;
			tmp[i%10]++;
			bool ok = true;
			for(int j=0; j<10; j++) if(cnt[j]<tmp[j]) ok = false;
			if(ok){
				puts("Yes");
				return 0;
			}
		}
		puts("No");
	}
	return 0;
}
