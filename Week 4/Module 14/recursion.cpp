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

void rec(int n)
{
    if (n > 5)
        return;
    rec(n + 1);
    cout << n << endl;
}

int rec_sum(int n)
{
    if (n > 5)
        return 0;
    int sum = rec_sum(n + 1);
    return sum + n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // rec(1);
    cout << rec_sum(1) << endl;
    return 0;
}