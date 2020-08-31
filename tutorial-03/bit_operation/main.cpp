#include <bits/stdc++.h>

using namespace std;

int main()
{
    bitset<4> b("1010");
    bitset<4> c("0100");

    cout << "b " << b << "\n";
    cout << "decimal to bit " << bitset<4>(12).to_string() << "\n";
    cout << "c " << c << "\n";
    cout << "b left-1 " << (b << 1) << "\n";
    cout << "and " << (b & c) << "\n";
    cout << "or " << (b | c) << "\n";
    cout << "xor " << (b ^ c) << "\n";
    cout << "3<<3 " << (3 << 3) << "\n";
    return 0;
}