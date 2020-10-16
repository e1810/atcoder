#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);

	int cnt = 0;
	bool ok = false;
	while(n--){
		int a, b;
		scanf("%d %d", &a, &b);
		if(a==b) cnt++;
		else cnt = 0;
		if(cnt>=3) ok = true;
	}
	
	if(ok) puts("Yes");
	else puts("No");
	return 0;
}
