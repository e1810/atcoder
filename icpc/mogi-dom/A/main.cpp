#include<bits/stdc++.h>

int main(){
    const int basey = 1896;
    while(true){
        int n;
        std::cin >> n;
        if(n==0) break;
        int gold[300] = {}, medal[300] = {};
        for(int i=0; i<n; i++){
            int y;
            std::string sp, med;
            std::cin >> y >> sp >> med;
            if(med=="Gold") gold[y-basey]++;
            medal[y-basey]++;
        }

        int ans_gold = 2021, ans_medal = 2021;
        for(int i=2021; i>=basey; i--){
            if(gold[ans_gold-basey] <= gold[i-basey]){
                ans_gold = i;
            }
            if(medal[ans_medal-basey] <= medal[i-basey]){
                ans_medal = i;
            }
        }
        printf("%d %d\n", ans_gold, ans_medal);
    }
    return 0;
}


