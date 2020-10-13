#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)

int main(){
	int s;
	scanf("%d", &s);

	std::vector<int> p;
	REP(i, 1, 21){
		p.push_back(i);
		p.push_back(2*i);
		p.push_back(3*i);
	}
	p.push_back(0);
	p.push_back(50);

	bool ok = false;
	REP(i, 0, 62) REP(j, 0, 62) REP(k, 0, 62) {
		if(p[i]+p[j]+p[k]==s) ok = true;
	}
	if(ok) puts("True");
	else puts("False");
	return 0;
}

