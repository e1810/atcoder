#include<bits/stdc++.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
	scanf("%d", &a[i]);
	a[i] /= 10;
    }

    int go[n+1] = {}, back[n+1] = {};
    for(int i=0; i<n; i++){
	if(a[i]){
	    go[i+1]++;
	    back[i-1]++;
	    if(i+a[i]+1<=n) go[i+a[i]+1]--;
	    if(i-a[i]-1>=0) back[i-a[i]-1]--;
	}
    }

    bool ok = true;
    for(int i=1; i<=n; i++){
	go[i] += go[i-1];
	if(go[i]<=0) ok = false;
    }
    for(int i=n-2; i>=0; i--){
	back[i] += back[i+1];
	if(back[i]<=0) ok = false;
    }
    if(ok) puts("yes");
    else puts("no");
    return 0;
}

