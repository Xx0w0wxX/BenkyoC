#include <bits/stdc++.h>

int sum()
{
    return 0;
}

template<typename... Args>

int sum(int a, Args... args)
{
    return a + sum(args...);
}

int main()
{
    std::cout << sum(5, 7, 2, 2) + sum(3, 4) << '\n';
}