#include<bits/stdc++.h>

int main(){
	int prime[1000000];
	for(int i=0; i<1000000; i++) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i=2; i<1000000; i++){
		if(prime[i]){
			for(int j=i+i; j<1000000; j+=i){
				prime[j] = 0;
			}
		}
	}

	int n;
	scanf("%d", &n);
	for(int i=n; i>0; i--) n += i-1;
	if(prime[n]) puts("WANWAN");
	else puts("BOWWOW");
	return 0;
}
