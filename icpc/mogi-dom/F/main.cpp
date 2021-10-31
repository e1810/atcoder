#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<int(e);i++)

int swapcnt(const std::string &s, const std::string &t){
    int i = 0, ret = 0;
    REP(j, 0, t.size()) if(t[j]=='1') {
        while(i<s.size() && s[i]!='1') i++;
        if(i==s.size()) break;
        ret += std::abs(i-j);
        i++;
    }
    return ret;
}

std::string solve(int &n, std::vector<std::string> &ss, std::string &t){
    int popcnt[n] = {};
    REP(i, 0, n){
        for(auto &c: ss[i]) if(c=='1') popcnt[i]++;
    }

    int dp[1+t.size()][1+t.size()] = {};
    REP(i, 0, 1+t.size()) REP(j, 0, 1+t.size()) dp[i][j] = 1e9;
    std::string str[1+t.size()][1+t.size()] = {};
    REP(i, 0, t.size()) REP(j, 0, t.size()) {
        REP(i, 0, n){
            if(i + ss[i].size() > t.size()) continue;
            if(j + popcnt[i] > t.size()) continue;
            int cnt = swapcnt(t, str[i][j] + ss[i]);
            if(cnt < dp[i+ss[i].size()][j+popcnt[i]]){
                dp[i+ss[i].size()][j+popcnt[i]] = cnt;
                str[i+ss[i].size()][j+popcnt[i]] = str[i][j] + ss[i];
            }
        }
    }

    REP(i, 0, 1+t.size()){
        REP(j, 0, 1+t.size()){
            std::cout << "'" << str[i][j] << "' ";
        }
        putchar('\n');
    }

    
    int tpopcnt = 0;
    for(auto &c: t) if(c=='1') tpopcnt++;
    if(dp[t.size()][tpopcnt]==1e9) return "IMPOSSIBLE";
    return str[t.size()][tpopcnt];
}

int main(){
    while(true){
        int n;
        std::cin >> n;
        if(n==0) break;
        std::vector<std::string> ss(n);
        std::string t;
        REP(i, 0, n) std::cin >> ss[i];
        std::cin >> t;
        std::cout << solve(n, ss, t) << '\n';
    }
    return 0;
}
