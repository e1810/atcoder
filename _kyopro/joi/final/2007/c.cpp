#include<bits/stdc++.h>
using P = std::pair<int,int>;

int main(){
	int n, x, y;
	scanf("%d", &n);
	std::vector<P> a;
	std::vector<std::vector<bool>> fie(5001, std::vector<bool>(5001, 0));
	for(int i=0; i<n; i++){
		scanf("%d %d", &x, &y);
		a.emplace_back(x, y);
		fie[x][y] = 1;
	}
	
	int ans = 0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			int x1, y1, x2, y2;
			std::tie(x1, y1) = a[i];
			std::tie(x2, y2) = a[j];
			
			int v = y2-y1, h = x1-x2;
			int x3 = x1 + v, y3 = y1 + h;
			int x4 = x2 + v, y4 = y2 + h;
			if(x3>=0 and y3>=0 and x4>=0 and y4>=0 and x3<=5000 and y3<=5000 and x4<=5000 and y4<=5000){
				if(fie[x3][y3] and fie[x4][y4]){
					ans = std::max(ans, h*v*2+abs(h-v)*abs(h-v));
				}
			}
			
			x3 = x1 - v, y3 = y1 - h;
			x4 = x2 - v, y4 = y2 - h;
			if(x3>=0 and y3>=0 and x4>=0 and y4>=0 and x3<=5000 and y3<=5000 and x4<=5000 and y4<=5000){
				if(fie[x3][y3] and fie[x4][y4]){
					ans = std::max(ans, h*v*2+abs(h-v)*abs(h-v));
				}
			}
		}
	}

	printf("%d\n", ans);
	return 0;
}
