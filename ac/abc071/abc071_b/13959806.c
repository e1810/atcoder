#include<stdbool.h>

bool alp[26];
main(c){
        while((c=getchar())!='
') alp[c-'a'] = true;
        for(int i=0; i<26; i++) if(!alp[i]) {
                putchar(i+'a');
                return 0;
        }
        puts("None");
        return 0;
}
