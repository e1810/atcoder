
#include<bits/stdc++.h>

std::vector<int> divisor(int n){
        std::vector<int> ret;
        for(int i=1; i*i<=n; i++){
                if(n%i == 0){
                        ret.push_back(i);
                        if(i*i != n) ret.push_back(n/i);
                }
        }
        std::sort(ret.begin(), ret.end());
        return ret;
}

int main(){
	int n, ans = 0;
	scanf("%d", &n);
	for(int i=1; i<=n; i+=2){
		ans += (divisor(i).size() == 8);
	}
	printf("%d
", ans);
	return 0;
}
