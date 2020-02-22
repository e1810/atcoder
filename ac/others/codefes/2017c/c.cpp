#include<bits/stdc++.h>

int main(){
	std::string s;
	std::cin >> s;

	std::vector<int> alp(26, 0);

	for(auto c: s) alp[c-'a']++;

	int mid = -1;
	for(int i=0; i<26; i++){
		if(alp[i]%2 && i!='x'-'a'){
		       	if(mid<0) mid = i;
			else{
				puts("-1");
				return 0;
			}
		}
	}

	int half = alp[mid]/2;
	bool flag = true;
	std::string t = "", d = "";
	for(auto c: s){
		if(flag){
			if(c-'a'==mid) alp[mid]--;
			if(alp[mid]<=half){
				flag = false;
				continue;
			}
			t += c;
		}else d += c;
	}

	std::reverse(d.begin(), d.end());
	int i = 0, j = 0, ans = 0;
	while(1){
		if(t.size()==i && d.size()==j) break;
		else if(t.size()==i){
			ans ++; 
			j++;
		}else if(d.size()==j){
			ans ++;
			i++;
		}else{
			if(t[i]=='x' && d[j]!='x'){
				ans ++;
				i++;
			}else if(t[i]!='x' && d[j]=='x'){
				ans ++;
				j++;
			}else{
				i++;
				j++;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}



		
