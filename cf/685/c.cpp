#include<bits/stdc++.h>

int main(){
	int qc;
	scanf("%d", &qc);
	while(qc--){
		int n, k;
		scanf("%d %d", &n, &k);
		char s[n+1], t[n+1];
		scanf("%s %s", s, t);
		
		int a[26] = {}, b[26] = {};
		for(int i=0; i<n; i++){
			a[s[i]-'a']++;
			b[t[i]-'a']++;
		}
		
		bool ok = true;
		int wa[26] = {};
		for(int i=0; i<26; i++){
			if(abs(a[i]-b[i])%k) ok = false;
			else wa[i] += (a[i]-b[i])/k;
		}
		for(int i=1; i<26; i++) wa[i] += wa[i-1];
		for(int i=0; i<26; i++) if(wa[i]<0) ok = false;
		
		if(ok) puts("Yes");
		else puts("No");
	}
	return 0;
}
