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
ll dp[1005]; // memoization
int cnt;

ll fibonacci(ll n) // O(N)
{
    cnt++;
    if (n < 2)
        return n;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return dp[n];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    memset(dp, -1, sizeof(dp));
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cnt = 0;
        cout << fibonacci(n) << " " << cnt << endl;
    }

    return 0;
}