len[3],used[3],s[3][100],d,i;rec(t){if(used[t]++>=len[t])putchar('A'+t);else rec(s[t][used[t]-1]);}main(){for(i=0;i<3;i++)while((d=getchar())!='
')s[i][len[i]++]=d-'a';rec(0);}
