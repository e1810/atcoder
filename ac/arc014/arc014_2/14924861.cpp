#include<bits/stdc++.h>

int main(){
  int n;
  scanf("%d", &n);
  char pre = ' ';
  std::set<std::string> used;
  for(int i=0; i<n; i++){
    std::string s;
    std::cin >> s;
    if(s[0]!=pre and i!=0 || used.count(s)){
      if(i%2) puts("WIN");
      else puts("LOSE");
      return 0;
    }
    used.insert(s);
    pre = *s.rbegin();
  }
  puts("DRAW");
  return 0;
}
