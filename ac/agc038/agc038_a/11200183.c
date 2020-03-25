
main(h,w,a,b,i,j){scanf("%d%d%d%d",&h,&w,&a,&b);for(i=0;i<h;i++){for(j=0;j<w;j++)printf("%d",(i<b)^(j<a));puts("");}}
