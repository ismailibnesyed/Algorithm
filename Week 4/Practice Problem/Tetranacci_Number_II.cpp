/*
|------------------------|
|                        |
|     Md                 |
|       Ismail           |
|         Hossain        |
|                        |
|------------------------|

*/
// Problems: Tetranacci Number II

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    long long int tetranacci[n + 5];
    tetranacci[0] = 0;
    tetranacci[1] = 1;
    tetranacci[2] = 1;
    tetranacci[3] = 2;
    for (int i = 4; i <= n; i++)
        tetranacci[i] = tetranacci[i - 1] + tetranacci[i - 2] + tetranacci[i - 3] + tetranacci[i - 4];

    cout << tetranacci[n] << endl;

    return 0;
}