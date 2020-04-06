
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if(abs(a-c)<=d or abs(a-b)<=d and abs(b-c)<=d) puts("Yes");
	else puts("No");
	return 0;
}
