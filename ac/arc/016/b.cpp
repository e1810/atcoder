#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	scanf("%d", &n);

	ll ans = 0;
	bool keep[9];
	memset(keep, 0, 9);
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		for(int j=0; j<9; j++){
			if(s[j]=='o'){
				if(!keep[j]){
					ans++;
					keep[j] = true;
				}else continue;
			}else if(s[j]=='x'){
				ans++;
				keep[j] = false;
			}else{
				keep[j] = false;
			}
		}
	}
	printf("%lld\n", ans);
	return 0;
}
