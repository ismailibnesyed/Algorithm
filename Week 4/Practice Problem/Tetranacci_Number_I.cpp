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

vector<int> dp(1005, -1);

int tetranacci(int n, vector<int> &dp)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    if (n == 3)
        return 2;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = tetranacci(n - 1, dp) + tetranacci(n - 2, dp) + tetranacci(n - 3, dp) + tetranacci(n - 4, dp);

    return dp[n];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    cout << tetranacci(n, dp) << endl;

    return 0;
}