#include<bits/stdc++.h>

int main(){
    int m, f, b;
    scanf("%d %d %d", &m, &f, &b);
    if(m+f<b) puts("NA");
    else printf("%d\n", std::max(0, b-m));
    return 0;
}
