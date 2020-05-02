
#include<bits/stdc++.h>

int main(){
	int x, y, r, x1, y1, x2, y2;
	scanf("%d %d %d %d %d %d %d", &x, &y, &r, &x1, &y1, &x2, &y2);
	
	if(x-r<x1 or x2<x+r or y-r<y1 or y2<y+r) puts("YES");
	else puts("NO");
	if(std::hypot(x1-x, y1-y)>r or std::hypot(x1-x, y2-y)>r or std::hypot(x2-x, y1-y)>r or std::hypot(x2-x, y2-y)>r) puts("YES");
	else puts("NO");
	return 0;
}
