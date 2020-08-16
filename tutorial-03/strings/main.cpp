#include <bits/stdc++.h>

using namespace std;

int main()
{
    regex email_pattern(R"(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$)");

    string str = "Hello\tWorld\n";
    string r_str = R"(Hello\tWorld\n)";

    cout << str << "\n";
    cout << "----------" << "\n";
    cout << r_str << "\n";

    cout << "----------" << "\n";
    string rr_str =
R"(Dear Programmers,
I'm using C++17)";
    cout << rr_str << "\n";

    cout << "----------" << "\n";
    string
    valid_email("swift@codeforces.com"),
    invalid_email("hello world");

    if (regex_match(valid_email, email_pattern))
        cout << valid_email << " is valid\n";
    else
        cout << valid_email << " is invalid\n";

    if (regex_match(invalid_email, email_pattern))
        cout << invalid_email << " is valid\n";
    else
        cout << invalid_email << " is invalid\n";

}