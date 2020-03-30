
#include<bits/stdc++.h>

int main(){
        char prev = '0', c;
        long ans = 0, cnt = 0;
        while((c = getchar()) != '
'){
                if(prev=='2' and c=='5') cnt++;
                else if(prev!='5' or c!='2'){
                        ans += (cnt+1)*cnt/2;
                        cnt = 0;
                }
                prev = c;
        }
        ans += (cnt+1)*cnt/2;
        printf("%ld
", ans);
        return 0;
}
