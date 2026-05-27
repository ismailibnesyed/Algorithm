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
#define ll long long int

int n;

int factorial(ll num)
{
    // if (num > n)
    //     return 1;
    // int fact = factorial(num + 1);
    // return num * fact;
    if (num == 1)
        return 1;
    ;
    return num * factorial(num - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    n = 10;
    // cout << factorial(1) << endl;
    cout << factorial(5) << endl;

    return 0;
}