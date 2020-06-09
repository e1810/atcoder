main(h,w){
        scanf("%d %d", &h, &w);
        char s[w+1];
        for(int i=0; i<h; i++){
                scanf("%s", s);
                printf("%s
%s
", s, s);
        }
        return 0;
}
