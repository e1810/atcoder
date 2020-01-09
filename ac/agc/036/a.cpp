#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll s, m=1e9;
	scanf("%lld", &s);
	printf("0 0 %lld 1 %lld %lld\n", m, (m-s%m)*(s%m!=0), s/m+(s%m!=0));
	return 0;
}
