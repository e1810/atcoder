#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)

int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n);
	REP(i, 0, n) scanf("%d", &a[i]);
	std::vector<int> b(a);
	std::sort(b.begin(), b.end());
	
	int cnt = 0;
	bool match[n];
	REP(i, 0, n){
		match[i] = (a[i]==b[i]);
		cnt += (a[i]==b[i]);
	}
	if(cnt==n){
		puts("0");
		return 0;
	}
	
	int q;
	scanf("%d", &q);
	REP(i, 0, q){
		int x, y;
		scanf("%d %d", &x, &y);
		x--, y--;
		cnt -= (a[x]==b[x]) + (a[y]==b[y]);
		cnt += (a[x]==b[y]) + (a[y]==b[x]);
		std::swap(a[x], a[y]);
		if(cnt==n){
			printf("%d\n", i+1);
			return 0;
		}
	}

	puts("-1");
	return 0;
}
		


	
