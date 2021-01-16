#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	int qc;
	scanf("%d", &qc);
	while(qc--){
		ll d, k;
		scanf("%lld %lld", &d, &k);
		bool ash = true;
		ll x = 0, y = 0;
		while(x*x+y*y<=d*d){
			ash = !ash;
			if(ash) y += k;
			else x += k;
		}
		if(ash) puts("Ashish");
		else puts("Utkarsh");
	}
	return 0;
}


