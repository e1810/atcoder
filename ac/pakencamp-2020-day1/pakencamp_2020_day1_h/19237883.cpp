#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		uint64_t a, b, c;
		scanf("%lu %lu %lu", &a, &b, &c);
		bool ok = true;
		int8_t len = -1;
		REP(i, 0, 64){
			bool O = (a>>i)&1ul, A = (b>>i)&1ul, X = (c>>i)&1ul;
			bool tok = false;
			if(!O and !A and !X) tok = true;
			if(O and !A and !X) tok = true;
			if(O and !A and X) tok = true;
			if(O and A){
				if(X){
					if(len==0) ok = false;
					else{
						tok = true;
						len = 1;
					}
				}else{
					if(len==1) ok = false;
					else{
						tok = true;
						len = 0;
					}
				}
			}
			if(!tok) ok = false;
		}
		if(ok) puts("Yes");
		else puts("No");
	}
	return 0;
}
