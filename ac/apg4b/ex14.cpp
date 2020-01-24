#include<bits/stdc++.h>
using namespace std;

int main(){
	int mx = 1, mn = 200;
	for(int i=0; i<3; i++){
		int tmp; scanf("%d", &tmp);
		mx = tmp>mx? tmp:mx;
		mn = tmp<mn? tmp:mn;
	}
	printf("%d\n", mx - mn);
}
