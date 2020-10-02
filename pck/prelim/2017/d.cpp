#include<bits/stdc++.h>

int main(){
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    int ok = true;
    while(n--){
	int s, f;
	scanf("%d %d", &s, &f);
	if(a<f && s<b) ok = false;
    }
    if(ok) puts("0");
    else puts("1");
    return 0;
}
