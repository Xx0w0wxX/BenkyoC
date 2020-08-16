#include <bits/stdc++.h>

using namespace std;


int main()
{
    set<int> s = {8, 2, 3, 1};
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
        cout << *it << "\n";

    cout << "------------" << "\n";

    for (auto it: s)
        cout << it << "\n";

    cout << "------------" << "\n";

    vector<int> v = {8, 2, 3, 1};
    for (auto &it: v)
        cout << it << "\n";
}