
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
        int k;
        scanf("%d", &k);

        std::priority_queue<P, std::vector<P>, std::greater<P>> que;
        for(int i=0; i<10; i++) que.push(P(10, i));
        while(k){
                ll a, dig;
                std::tie(dig, a) = que.top();
                que.pop();

                ll tmp = a, td = dig/10;
                while(td>=10){
                        tmp /= 10;
                        td /= 10;
                }
                if(tmp!=0) k--;

                if(k<1){
                        printf("%ld
", a);
                        break;
                }

                if(tmp>0) que.push(P(dig*10, (tmp-1)*dig+a));
                que.push(P(dig*10, tmp*dig+a));
                if(tmp<9) que.push(P(dig*10, (tmp+1)*dig+a));
        }
        return 0;
}
