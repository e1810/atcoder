
#include<bits/stdc++.h>


int main(){
        std::string s, t;
        std::cin >> s >> t;

        bool cant = false;
        std::vector<int> sr(26, 0), tr(26, 0);
        for(int i=0; i<s.size(); i++){
                int x = s[i]-'a', y = t[i]-'a';
                if(x!=y)
                        if(sr[x]!=0 && sr[x]!=t[i] or tr[y]!=0 && tr[y]!=s[i]) cant = true;
                sr[x] = t[i];
                tr[y] = s[i];
        }

        if(cant) puts("No");
        else puts("Yes");
        return 0;
}
