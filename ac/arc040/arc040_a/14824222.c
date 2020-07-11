main(n,r,b,c,i,j){
  scanf("%d", &n);
  r = b = 0;
  for(i=0; i<n; i++){
    getchar();
    for(j=0; j<n; j++){
      c = getchar();
      if(c=='R') r++;
      if(c=='B') b++;
    }
  }
  if(r>b) puts("TAKAHASHI");
  else if(r<b) puts("AOKI");
  else puts("DRAW");
  return 0;
}
