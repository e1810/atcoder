
#include<bits/stdc++.h>

int main(){
        int s, l, r;
        scanf("%d %d %d", &s, &l, &r);
        printf("%d
", std::clamp(s, l, r));
        return 0;
}
