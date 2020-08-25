#include <bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for (int i = a; i <= b; i++)

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> math(n);
    vector<int> english(n);

    REP(i, 0, n-1) {
        cin >> math.at(i);
    }

    REP(i, 0, n-1) {
        cin >> english.at(i);
    }

    REP(i, 0, n-1) {
        cout << math.at(i) + english.at(i) << '\n';
    }

    for(auto& i:math)
    {
        cout << "hello" << i << '\n';
    }
}