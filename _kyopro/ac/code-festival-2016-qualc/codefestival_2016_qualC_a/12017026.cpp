
#include<cstdio>

char s;
bool c, f;

int main(){
	while((s=getchar()) != '
'){
		if(s=='C') c = true;
		if(c and s=='F') f = true;
	}
	if(f) puts("Yes");
	else puts("No");
	return 0;
}
