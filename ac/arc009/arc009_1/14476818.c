main(n,ans,a,b){
  ans = 0;
  scanf("%d", &n);
  while(n--){
    scanf("%d%d", &a, &b);
    ans += a * b;
  }
  printf("%d
", ans + ans/20);
  return 0;
}
