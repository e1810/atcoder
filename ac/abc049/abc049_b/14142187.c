char s[101];
main(h,w){
        scanf("%d %d", &h, &w);
        for(int i=0; i<h; i++){
                scanf("%s", s);
                printf("%s
%s
", s, s);
        }
        return 0;
}
