
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vl;

#define SQ(a) (a) * (a)

#define fo(i, a, b) for (ll i = (a); i <= (b); ++i)
#define fd(i, b, a) for (ll i = (b); i >= (a); --i)

int main()
{
    int a[60], b[60], c[60], d[60];
    int n, m;
    cin >> n >> m;
    fo(i, 1, n) cin >> a[i] >> b[i];
    fo(i, 1, m) cin >> c[i] >> d[i];

    fo(i, 1, n)
    {
        int ans = 1000000000;
        int k;
        fo(j, 1, m)
        {
            int t = abs(a[i] - c[j]) + abs(b[i] - d[j]);
            if (t < ans)
            {
                ans = t;
                k = j;
            }
        }
        cout << k << "\n";
    }
    return 0;
}
