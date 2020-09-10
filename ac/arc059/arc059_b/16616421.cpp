#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)

int main(){
	std::string s;
	std::cin >> s;
	int n = s.size();

	for(char alp='a'; alp<='z'; alp++){
	    int min = 0, cnt = (s[n-1]==alp? 1:-1), r = n;
	    for(int i=n-2; i>=0; i--){
		int pre = cnt;
		if(s[i]==alp) cnt++;
		else cnt--;
		if(cnt-min>0){
		    printf("%d %d
", i+1, r);
		    return 0;
		}
		if(pre<min){
		    r = i+1;
		    min = pre;
		}
	    }
	}
	puts("-1 -1");
	return 0;
}
