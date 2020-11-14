#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	int n;
	scanf("%d", &n);
	char s[n+1], t[n+1];
	scanf("%s %s", s, t);

	ll ans = 0;
	int dis = 0;
	while(dis<n && t[dis]!='1') dis++;

	int prev = -1;
	for(int i=0; i<n; i++){
		if(s[i]=='1') {
			if(prev>=0){
				s[prev] = s[i]= '0';
				ans += i-prev;
				prev = -1;
				continue;
			}

			if(dis>i) prev = i;
			else{
				s[i] = '0';
				s[dis] = '1';
				ans += i-dis;
				dis++;
				while(dis<n && t[dis]!='1') dis++;
			}
		}
	}

	bool ok = true;
	for(int i=0; i<n; i++){
		if(s[i]!=t[i]) ok = false;
	}

	if(ok) printf("%ld
", ans);
	else puts("-1");
	return 0;
}
