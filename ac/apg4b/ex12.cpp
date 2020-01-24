#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int ans = 1;
  for(auto c: S){
    if(c=='+') ans++;
    else if(c=='-') ans--;
  }
  cout << ans << endl;
}

