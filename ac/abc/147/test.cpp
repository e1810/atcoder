#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int a = 0b0000111100001111;
	for(int i=0; i<60; i++){
		printf("%lld\n", a>>i);
	}
	return 0;
}
