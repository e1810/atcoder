
#include<bits/stdc++.h>

int main(){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        std::vector<int> v(0);
        for(int i=1; i<=a+b+c; i++) v.push_back(i);

        int ans = 0;
        do{
                bool cant = false;
                for(int i=1; i<a; i++) if(v[i-1]>v[i]) cant = true;
                for(int i=a+1; i<a+b; i++) if(v[i-1]>v[i]) cant = true;
                for(int i=a+b+1; i<a+b+c; i++) if(v[i-1]>v[i]) cant = true;

                for(int i=a; i<a+b; i++) if(v[i-a]>v[i]) cant = true;
                for(int i=a+b; i<a+b+c; i++) if(v[i-b]>v[i]) cant = true;
                if(!cant) ans++;
        }while(std::next_permutation(v.begin(), v.end()));

        printf("%d
", ans);
        return 0;
}
