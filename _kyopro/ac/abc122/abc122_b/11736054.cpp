
#include <bits/stdc++.h>

int main(){
	char s[16], c;
	int l = 0;
	while((c=getchar()) != '
') s[l++] = c;
	
	int ans = 0;
	for(int i=0; i<l; i++) for(int j=i; j<l; j++) {
		bool ok = true;
		for(int k=i; k<=j; k++){
			if(s[k]!='A' and s[k]!='C' and s[k]!='G' and s[k]!='T') ok = false;
		}
		if(ok) ans = std::max(ans, j-i+1);
	}
			
	printf("%d
", ans);
	return 0;
}
