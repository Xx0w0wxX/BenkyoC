#include <bits/stdc++.h>

using namespace std;

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

int main()
{
    int x;
    int n;
    int rcounter;
    int lcounter;
    rcounter = 0;
    lcounter = 0;

    cin >> x >> n;
    vector<int> v(n);

    rep(it, 0, n)
        cin >> v[it];

    if (n==0) {
        cout << x << "\n";
        return 0;
    }

    while (true) {
        if (find(v.begin(), v.end(), x+rcounter) != v.end()) {
            // in right
            rcounter++;
            if (find(v.begin(), v.end(), x-lcounter) != v.end()) {
                // in left
                lcounter++;
                continue;
            } else {
                cout << x-lcounter << "\n";
                return 0;
            }
        } else {
            // not in right
            if (find(v.begin(), v.end(), x-lcounter) != v.end()) {
                // in left
                cout << x+rcounter << "\n";
                return 0;
            } else {
                // not in left
                cout << x-lcounter << "\n";
                return 0;
            }
        }
    }

    return 0;
}
