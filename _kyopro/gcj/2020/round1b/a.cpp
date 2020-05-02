#include<bits/stdc++.h>

int main(){
	int qq; scanf("%d", &qq);
	for(int t=0; t<qq; t++){
		int x, y;
		scanf("%d %d", &x, &y);
		std::string ans = "IMPOSSIBLE";
		for(int i=0; i<65536; i++){
			int a = i, nx = 0, ny = 0, b = 1;
			std::string s = "";
			for (int j=0; j<8; j++){
				if(a%4==0){
					nx += b;
					s += "E";
				}else if(a%4==1){
					nx -= b;
                                        s += "W";
                                }else if(a%4==2){
					ny += b;
                                        s += "N";
                                }else if(a%4==3){
					ny -= b;
                                        s += "S";
                                }
				b *= 2;
				a /= 4;
				if(nx==x and ny==y) ans = s;
			}
		}
		printf("Case #%d: %s\n", t+1, ans.c_str());
	}
	return 0;
}

