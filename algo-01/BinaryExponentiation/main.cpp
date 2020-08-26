#include <iostream>

using namespace std;

long long binpow(long long a, long long b) {
    if (b == 0) {
        return 1;
    }
    long long res = binpow(a, b/2);
    if (b%2) {
        return res * res * a;
    } else {
        return res * res;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a, b;
    cin >> a >> b;
    cout << binpow(a, b);
}