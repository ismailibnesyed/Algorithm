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
    long long int X, A, B, C, D;
    cin >> A >> B >> D >> C;
    X = (A * B) - (C * D);
    cout << "Difference = " << X << endl;
    return 0;
}