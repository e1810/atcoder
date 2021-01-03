#include<bits/stdc++.h>
using ll = int_fast64_t;
using ld = long double;

int main(){
	int q;
	scanf("%d", &q);
	while(q--){
		ll a, b, c;
		scanf("%ld %ld %ld", &a, &b, &c);
		if(a<0) a*=-1, b*=-1, c*=-1;

		if(a){
			__int128 R = a * c;
			R *= -4;
			R += b * b;
			if(R==0){
				printf("1 %.20Lf
", -b/(ld)(2*a));
			}else if(R<0) puts("0");
			else{
				ld x = (-b-sqrtl(R))/(2*a);
				ld y = (-b+sqrtl(R))/(2*a);
				printf("2 %.20Lf %.20Lf
", x, y);
			}
		}else{
			if(b) printf("1 %.20Lf
", -c/(ld)b);
			else{
				if(c) puts("0");
				else puts("3");
			}
		}
	}
	return 0;
}
