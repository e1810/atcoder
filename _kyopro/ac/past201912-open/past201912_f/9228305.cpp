
#include<bits/stdc++.h>
using namespace std;

int main(){
        string s; cin>>s;
        vector<string> ss(0);
        int i=0;
        bool w=false;
        string tmp = "";
        while(s[i]){
                if(s[i]<'a'){
                        if(w){
                                tmp += s[i]+('a'-'A');
                                ss.push_back(tmp);
                        }else tmp = s[i]+('a'-'A');
                        w = !w;
                }else tmp += s[i];
                i++;
        }

        sort(ss.begin(), ss.end());
        for(string t: ss){
                t[0] = t[0]-('a'-'A');
                t[t.size()-1] = t[t.size()-1]-('a'-'A');
                cout << t;
        }
        cout << endl;
        return 0;
}
