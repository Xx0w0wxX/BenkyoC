#include <iostream>
#include<bitset>
#include <math.h>
using namespace std;

std::string tail(std::string const& source, size_t const length) {
    if (length >= source.size()) { return source; }
    return source.substr(source.size() - length);
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int i;
    bool flag;
    int max;
    max = 0;
    flag = true;

    cin >> i;

    while (flag)
    {
        long tmp;
        tmp = pow(2, max);
        if (tmp <= i)
        {
            max++;
        } else {
            flag = false;
        }
    }
    bitset<100*sizeof(int)> b = i;
    string s = b.to_string<char>();
    cout << tail(s, max) << '\n';
    return 0;
}
