unsigned alp;
main(c){
        while((c=getchar())!='
') alp |= 1<<(c-'a');
        for(int i=0; i<26; i++) if(!((alp>>i)&1)) {
                putchar(i+'a');
                return 0;
        }
        puts("None");
        return 0;
}
