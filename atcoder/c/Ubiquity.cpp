#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll mod = 1000000007;

#define fo(i, a, b) for (ll i = (a); i <= (b); ++i)
#define fd(i, b, a) for (ll i = (b); i >= (a); --i)

ll powmod(ll x, ll y)
{
    ll res = 1;
    fo(i, 1, y) res = res * x % mod;
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll ans = powmod(10, n) - powmod(9, n) - powmod(9, n) + powmod(8, n);
    ans %= mod;
    ans = (ans + mod) % mod; // (-2 % 5) = -3
    cout << ans;
}