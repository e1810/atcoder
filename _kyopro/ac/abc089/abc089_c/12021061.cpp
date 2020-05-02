
#include<bits/stdc++.h>

int_fast64_t n, ans, march[5];
char s[16];

int main(){
	scanf("%ld", &n);
	for(int i=0; i<n; i++){
		scanf("%s", s);
		if(s[0]=='M') march[0]++;
		if(s[0]=='A') march[1]++;
		if(s[0]=='R') march[2]++;
		if(s[0]=='C') march[3]++;
		if(s[0]=='H') march[4]++;
	}
	
	for(int i=0; i<5; i++) for(int j=i+1; j<5; j++) for(int k=j+1; k<5; k++){
		ans += march[i] * march[j] * march[k];
	}
	printf("%ld
", ans);
}
