MOD = 10**9 + 7
n = int(input())
ans = pow(10, n, MOD)
ans -= pow(9, n, MOD)
ans %= MOD
ans -= pow(9, n, MOD)
ans %= MOD
ans += pow(8, n, MOD)
ans %= MOD
print(ans)
