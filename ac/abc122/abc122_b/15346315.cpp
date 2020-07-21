#include<bits/stdc++.h>

int main(){
        int ans = 0;
        std::string s;
        std::cin >> s;

        for(int i=0; i<s.size(); i++){
                int tmp = 0;
                for(int j=i; j<s.size(); j++){
                        if(s[j]!='A' and s[j]!='C' and s[j]!='G' and s[j]!='T'){
                                break;
                        }else{
                                tmp++;
                        }
                }
                ans = std::max(ans, tmp);
        }

        printf("%d
", ans);
        return 0;
}
