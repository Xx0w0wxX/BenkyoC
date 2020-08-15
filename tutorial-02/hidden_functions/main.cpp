#include<iostream>
#include <numeric>

using namespace std;

int main()
{
    cout << "GCD: " << gcd(18, 27) << '\n';

    // Suffix, l(unsigned long), ll(unsigned long long), none(unsigned int)

    // This function returns 1 + least significant 1-bit of x
    cout << "__builtin_ffs: " << __builtin_ffs(10) << '\n'; // 1010
    cout << "__builtin_ffsl: " << __builtin_ffsl(7) << '\n'; // 111
    cout << "__builtin_ffsll: " << __builtin_ffsll(8) << '\n'; // 1000
    // This function returns number of leading 0-bits of x which starts from most significant bit position
    cout << "__builtin_clz: " << __builtin_clz(7) << '\n'; // 32bit unsigned int
    cout << "__builtin_clzl: " << __builtin_clzl(7) << '\n';
    cout << "__builtin_clzll: " << __builtin_clzll(7) << '\n';
    // This function returns number of trailing 0-bits of x which starts from least significant bit position
    cout << "__builtin_ctz: " << __builtin_ctz(8) << '\n'; // 32bit unsigned int
    cout << "__builtin_ctzl: " << __builtin_ctzl(8) << '\n';
    cout << "__builtin_ctzll: " << __builtin_ctzll(8) << '\n';
    // This function returns number of 1-bits of x.
    cout << "__builtin_popcount: " << __builtin_popcount(10) << '\n';
    cout << "__builtin_popcountl: " << __builtin_popcountl(10) << '\n';
    cout << "__builtin_popcountll: " << __builtin_popcountll(10) << '\n';
    // This function returns Even(0) and odd(1)
    cout << "__builtin_popcount: " << __builtin_popcount(11) << '\n';
    cout << "__builtin_popcountl: " << __builtin_popcountl(11) << '\n';
    cout << "__builtin_popcountll: " << __builtin_popcountll(11) << '\n';

    return 0;
}