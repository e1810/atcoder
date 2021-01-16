#include<cstdio>
#include<algorithm>

int main(){
	int a, b, c, d, e, f, g, h;
	scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
	int ans = c * d + g * h;
	c += a; d += b; g += e; h += f;
	int W = 0, H = 0;
	if(a<=g && e<=c) W = std::min({g-a, c-e, c-a, g-e});
	if(b<=h && f<=d) H = std::min({h-b, d-f, h-f, d-b});
	ans -= 2 * H * W;
	printf("%d\n", ans);
	return 0;
}
