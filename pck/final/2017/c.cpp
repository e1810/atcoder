#include<cstdio>
#include<algorithm>

struct P {
	int y, m, d;
};

int main(){
	P a, b;
	scanf("%d %d %d", &a.y, &a.m, &a.d);
	scanf("%d %d %d", &b.y, &b.m, &b.d);
	if(a.y>b.y) std::swap(a, b);
	else if(a.y==b.y){
		if(a.m>b.m) std::swap(a, b);
		else if(a.m==b.m){
			if(a.d>b.d) std::swap(a, b);
			else if(a.d==b.d){
				puts("0");
				return 0;
			}
		}
	}

	int ans = b.y - a.y;
	if(a.m<b.m) ans++;
	else if(a.m==b.m && a.d<b.d) ans++;
	printf("%d\n", ans);
	return 0;
}

