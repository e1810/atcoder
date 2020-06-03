char ans[36] = "FaMi  Re  DoSi  La  So  ";

int main(){
        char s[21], t[8] = "WBWBWBW";
        scanf("%s", s);
        for(char i=0; i<14; i++){
                char ok = 1;
                for(char j=0; j<7; j++){
                        ok &= (s[i+j]==t[j]);
                }
                if(ok){
                        printf("%c%c
", ans[2*i], ans[2*i+1]);
                        return 0;
                }
        }
        return 0;
}
