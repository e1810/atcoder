#include<bits/stdc++.h>

int main(){
	std::vector<int> a(5);
	for(int i=0; i<5; i++) scanf("%d", &a[i]);
	
	std::string ans = "NO";
	for(int i=1; i<5; i++){
		if(a[i-1]==a[i]) ans = "YES";
	}
	std::cout << ans << std::endl;
	return 0;
}

