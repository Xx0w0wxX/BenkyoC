#include <iostream>
#include <vector>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)

#define badSQ(a) a*a
#define goodSQ(a) (a)*(a)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    typedef pair<int,int> pi;

    vector<pi> v;
    int i = 0;

    pi mypair = MP(1, 2);
    v.PB(mypair);

    int d = v[i].F + v[i].S;

    REP(i, 1, 5) {
        cout << d << '\n';
    }

    // 3+3*3+3
    cout << "bad " << badSQ(3+3) << "\n";
    // (3+3)*(3+3)
    cout << "good " << goodSQ(3+3) << "\n";
}