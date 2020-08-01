#include <iostream>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x = 123456789;
    long long y = x * x;

    cout << y << '\n';
    cout << (long long)x*x << '\n';
}