
#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	int k;
	scanf("%d", &k);
	
	std::queue<ll> que;
	for(int i=1; i<10; i++) que.push(i);
	while(k--){
		ll a = que.front();
		que.pop();
		if(k==0){
			printf("%ld
", a);
			return 0;
		}
		if(0<a%10) que.push(a * 10 + a%10-1);
		que.push(a * 10 + a%10);
		if(a%10<9) que.push(a * 10 + a%10+1);
	}
	return 0;
}
