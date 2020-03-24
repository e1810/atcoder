
#include<bits/stdc++.h>

int main(){
        int n, m;
        std::cin >> n;
        std::map<std::string, int> dict;
        std::string s;
        for(int i=0; i<n; i++){
                std::cin >> s;
                dict[s]++;
        }
        std::cin >> m;
        for(int i=0; i<m; i++){
                std::cin >> s;
                dict[s]--;
        }
        int ans = 0;
        for(auto p: dict) ans = std::max(ans, p.second);
        std::cout << ans << std::endl;
        return 0;
}
