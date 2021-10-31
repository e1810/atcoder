#include<bits/stdc++.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    REP(i, 0, n) scanf("%d", &a[i]);
    P kukan[m+1];
    REP(i, 0, m+1) scanf("%d %d", &kukan[i].first, &kukan[i].second);
    int kukan_id[m+1];
    REP(i, 0, m+1) kukan_id[i] = i;

    P next_kukan_id_left[m+1];
    std::sort(kukan, ku+m+1, [](P a, P b){
        if(a.first != b.first) return a.first < b.first;
        return a.second-a.first > b.second-b.first;
    });

    bool rev[n] = {};
    std::function<void(int)> dfs = [&](int d){
        auto [l, r] = kukan[d];
        if(d==m){
            if(a[l] > a[r]) rev[l] = rev[r] = true;
        }else{
            auto [nl, nr] = kukan[d+1];
            int lv, rv;
            if(l == nl)
               

