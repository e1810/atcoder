#include<iostream>
#include<map>

int main(){
  int n; std::cin >> n;
  std::map<std::string,int> mp;
  for(int i=0; i<n; i++){
    int q; std::cin >> q;
    while(q--){
      std::string s; std::cin >> s;
      mp[s]++;
    }
  }
  
  int ans = 0;
  for(auto [k,v]: mp){
    if(v==n) ans++;
  }
  std::cout << ans << '
';
  return 0;
}
