#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)

int main(){
  int n;
  scanf("%d", &n);
  int a[n+1];
  REP(i, 0, n) scanf("%d", &a[i]);
  a[n] = 0;
  
  std::map<int,int> mp;
  int l = 0, r = 0, ans = 0;
  while(l<n){
    while(!mp[a[r]]){
      mp[a[r]]++;
      r++;
      if(r>=n) break;
    }
    ans = std::max(ans, r-l);
    if(r>=n){
      printf("%d
", ans);
      return 0;
    }
    while(mp[a[r]]){
      mp[a[l]]--;
      l++;
    }
  }
  printf("%d
", ans);
  return 0;
}
