
#include<bits/stdc++.h>
using namespace std;

int main(){
        int ans = 0;
        string s; cin >> s;
        for(int i=0; i<s.size(); i++){
                for(int j=0; j<s.size(); j++){
                        int cnt = 0;
                        for(int k=i; k<=j; k++){
                                if(s[k]=='A' or s[k]=='C' or s[k]=='G' or s[k]=='T') cnt ++;
                                else cnt = -1e8;
                        }
                        ans = max(ans, cnt);
                }
        }
        printf("%d
", ans);
        return 0;
}
