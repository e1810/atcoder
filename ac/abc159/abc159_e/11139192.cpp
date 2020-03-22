
#include<bits/stdc++.h>
using std::vector;

int main(){
        int h, w, k;
        scanf("%d %d %d", &h, &w, &k);
        vector<vector<int>> cho(h, vector<int>(w));
        for(int i=0; i<h; i++){
                char s[w+1];
                scanf("%s", s);
                for(int j=0; j<w; j++){
                        cho[i][j] = (s[j]=='1');
                }
        }
        int ans = h+w-2;
        for(int bit=0; bit<(1<<(h-1)); bit++){
                vector<vector<int>> ac(0);
                vector<int> wa(cho[0]);
                bool cant = false;

                for(int i=0; i<h; i++){
                        if((bit>>i)&1){
                                ac.push_back(wa);
                                for(int j=0; j<w; j++) wa[j] = cho[i+1][j];
                        }else if(i==h-1) ac.push_back(wa);
                        else{
                                for(int j=0; j<w; j++){
                                        wa[j] += cho[i+1][j];
                                        if(wa[j]>k) cant = true;
                                }
                        }
                }

                if(cant) continue;

                vector<int> cnt(ac.size(), 0), lined(w-1, 0);
                for(int j=0; j<w; j++){
                        for(int i=0; i<ac.size(); i++){
                                cnt[i] += ac[i][j];
                                if(cnt[i]>k){
                                        lined[j-1] = 1;
                                        for(int X=0; X<ac.size(); X++) cnt[X] = ac[X][j];
                                        break;
                                }
                        }
                }


                int cand = __builtin_popcount(bit);
                for(int i: lined) cand += i;
                ans = std::min(ans, cand);
        }

        printf("%d
", ans);
        return 0;
}
