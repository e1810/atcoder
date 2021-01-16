#include<bits/stdc++.h>

int main(){
	int n, cnt = 0;
	scanf("%d", &n);
	while(n--){
		std::string s;
		std::cin >> s;
		if(s!="AC") cnt++;
	}
	printf("%d\n", cnt*5);
	return 0;
}
