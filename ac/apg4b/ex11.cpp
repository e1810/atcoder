#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a; scanf("%d %d", &n, &a);
	for(int i=0; i<n; i++){
		string op;
		int b;
		cin >> op >> b;
		if(op=="+") a += b;
		else if(op=="-") a -= b;
		else if(op=="*") a *= b;
		else if(op=="/"){
			if(b) a /= b;
			else{
				puts("error");
				return 0;
			}
		}
		printf("%d:%d\n", i+1, a);
	}
}

