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
    string f1, f2, s1, s2;
    cin >> f1 >> s1 >> f2 >> s2;
    if (s1 == s2)
        cout << "ARE Brothers";
    else
        cout << "NOT";
    cout << endl;
    return 0;
}