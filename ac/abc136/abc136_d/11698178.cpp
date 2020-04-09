
#include<bits/stdc++.h>

int main(){
        std::string s;
        std::cin >> s;

        int l = s.size(), inr = true, cnt = 0, gath;
        std::vector<int> ans(l, 0);
        s += 'R';
        for(int i=0; i<=l; i++){
                if(inr){
                        if(s[i]=='R') cnt++;
                        else{
                                gath = i-1;
                                ans[gath] += (cnt+1)/2;
                                ans[gath+1] += cnt/2;
                                cnt = 1;
                                inr = false;
                        }
                }else{
                        if(s[i]=='L') cnt++;
                        else{
                                ans[gath] += cnt/2;
                                ans[gath+1] += (cnt+1)/2;
                                cnt = 1;
                                inr = true;
                        }
                }
        }

        for(int i=0; i<l; i++) printf("%d ", ans[i]);
        return 0;
}
