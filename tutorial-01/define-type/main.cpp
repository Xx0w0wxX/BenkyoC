#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    typedef long long ll;
    typedef vector<int> vi;
    typedef pair<int,int> pi;

    int x = 123456789;
    cout << (ll)x*x << '\n';

    pi mypair = make_pair(1,2);

    vector<pi> output;
    output.push_back(mypair);

    for(int i = 0; i < output.size(); i++)
    {
        cout << output[i].first << ", " << output[i].second << endl;
    }
}