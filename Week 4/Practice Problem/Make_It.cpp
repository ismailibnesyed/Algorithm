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
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        while (n > 1)
        {
            if (n % 2 == 0)
                n /= 2;
            else
                n -= 3;
        }

        if (n == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}