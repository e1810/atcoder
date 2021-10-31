#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)

int log(int x){
    int cnt = 0;
    while(x>1){
        cnt++;
        x >>= 1;
    }
    return cnt;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[1<<n];
    REP(i, 0, 1<<n){
        scanf("%d", &a[i]);
        a[i] = log(a[i]);
    }

    std::queue<int> ques[n+1];
    REP(i, 0, 1<<n) ques[a[i]].push(i);
    REP(i, 0, n+1){
        int cnt = (i==0)? 1 : (1<<(i-1));
        if(ques[i].size() != cnt){
            puts("-1");
            return 0;
        }
    }

    int tab[1<<(n+1)], rank = 0;
    REP(i, 0, 1<<(n+1)) tab[i] = -1;
    REP(i, 0, 1<<(n+1)){
       if(tab[i]<0){
           if(ques[rank].empty()) rank++;
           tab[i] = ques[rank].front();
           ques[rank].pop(); 
       }
       if(i < (1<<n))tab[i*2+1] = tab[i];
    }

    REP(i, 0, 1<<n){
        if(i) putchar(' ');
        printf("%d", tab[i+(1<<n)]+1);
    }
    puts("");
    return 0;
}



