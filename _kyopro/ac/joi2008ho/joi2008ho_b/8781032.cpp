
#include<bits/stdc++.h>
using namespace std;

int main(){
        string s, t;
        cin >> s >> t;
        int ans = 0, lx = s.size(), ln = t.size();
        if(lx<ln){int tmp=lx; lx=ln; ln=tmp;}

        for(int i=-ln+1; i<lx; i++){
                int tmp = 0;
                for(int j=0; j<min(ln, lx-i); j++){
                        if(j+i<0)continue;
                        if(lx==s.size()){
                                if(s[j+i]==t[j]) tmp++;
                                else tmp = 0;
                        }else{
                                if(s[j]==t[j+i]) tmp++;
                                else tmp = 0;
                        }
                        ans = max(ans, tmp);
                }
        }

        printf("%d
", ans);
        return 0;
}
