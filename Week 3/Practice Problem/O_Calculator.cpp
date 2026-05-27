/*
|------------------------|
|                        |
|     Md                 |
|       Ismail           |
|         Hossain        |
|                        |
|------------------------|

*/
// Problems:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    char c;
    cin >> x >> c >> y;
    if (c == '+')
        cout << x + y;
    else if (c == '-')
        cout << x - y;
    else if (c == '*')
        cout << x * y;
    else if (c == '/')
        cout << x / y;
    return 0;
}