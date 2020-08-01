#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double x = 0.3 * 3 + 0.1;
    int y=1;
    printf("%.20f\n", x);

    if (abs(x-y) < 1e-9) {
        printf("x is 1\n");
    }
}