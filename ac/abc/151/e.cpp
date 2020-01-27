#include<bits/stdc++.h>
#include<cstdint>

template <std::int_fast64_t MOD> class modint{
        using ll = std::int_fast64_t;

        public:
                ll val;
                constexpr modint(const ll x=0) noexcept: val(x % MOD){
                        if(val<0) val += MOD;
                }
                constexpr modint operator+(const modint& other) const noexcept{
                        return modint(*this) += other;
                }
                constexpr modint operator-(const modint& other) const noexcept{
                        return modint(*this) -= other;
                }
                constexpr modint operator*(const modint& other) const noexcept{
                        return modint(*this) *= other;
                }
                constexpr modint operator/(const modint& other) const noexcept{
                        return modint(*this) /= other;
                }

                constexpr modint& operator+=(const modint& other) noexcept{
                        val += other.val;
                        if(val>=MOD) val -= MOD;
                        return this;
                }
                constexpr modint& operator-=(const modint& other) noexcept{
                        val -= other.val;
                        if(val<0) val += MOD;
                        return *this;
                }
                constexpr modint& operator*=(const modint& other) noexcept{
                        val = val * other.val % MOD;
                        return *this;
                }
                constexpr modint& operator/=(const modint& other) noexcept{
                        ll a = other.val, b = MOD, u = 1, v = 0;
                        while(b){
                                ll t = a/b;
                                a -= t*b; std::swap(a, b);
                                u -= t*v; std::swap(u, v);
                        }
                        val = val * u % MOD;
                        if(val<0) val += MOD;
                        return this;
                }

                constexpr bool operator==(const modint& other) const noexcept{
                        return this->val == other.val;
                }
                constexpr bool operator!=(const modint& other) const noexcept{
                        return this->val != other.val;
                }
};

using namespace std;
using ll = long long;
using mint = modint<10000007>;

int main(){
	mint n, k; cin >> n >> k;
        vector<mint> big(n);
        for(ll i=0; i<n; i++) cin >> big[i];
        vector<mint> lit(big);
        sort(big.begin(), big.end(), greater<mint>());
        sort(lit.begin(), lit.end());

        ll ans = 0;
        for(ll i=0; i<n; i++){
                ans += big[i] * (n-i-2)*(n-i-1)/2;
                ans -= lit[i] * (n-i-2)*(n-i-1)/2;
        }
        printf("%lld\n", ans);
        return 0;
}

