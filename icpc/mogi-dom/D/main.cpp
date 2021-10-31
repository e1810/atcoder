#include<bits/stdc++.h>

int solve(std::string s){
    int st = s.size()/2, mid = s.size()/2;
    int lst = s.size()/2 - 1, ans = 0;
    for(int gl=mid; gl<s.size(); gl++){
        int lgl = lst - (gl - st);
        if(s[gl] == s[lst] && s[lgl] == s[st]){
            if(st==gl){
                st = gl + 1;
                lst -= 1;
                continue;
            }

            bool ok = true;
            for(int j=0; j<gl-st+1; j++){
                if(s[lgl + j] != s[st + j]){
                    ok = false;
                }
            }
            if(!ok) continue;
            ans += (gl - st + 1) * (gl - st + 1);
            lst -= gl - st + 1;
            st = gl + 1;
        }
    }
    if(lst != -1) return -1;
    return ans;
}

int main(){
    while(true){
        std::string s;
        std::cin >> s;
        if(s=="#") break;

        if(s.size()%2){
            s.erase(s.begin() + s.size()/2);
        }
        if(s.size()==0) puts("0");
        else printf("%d\n", solve(s));
    }
    return 0;
}
