#include<bits/stdc++.h>

int main(){
    int qq;
    scanf("%d", &qq);
    while(qq--){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	std::sort(a.begin(), a.end());
	int x=0, y=0;
	for(int i: a){
	    if(x==i) x++;
	    else if(x<i) break;
	    else{
		if(y==i) y += 1;
		else break;
	    }
	}
	printf("%d\n", x+y);
    }
    return 0;
}

