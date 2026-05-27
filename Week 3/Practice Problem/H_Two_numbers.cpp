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
    cin >> x >> y;
    float z = (float)x / y;
    cout << "floor " << x << " / " << y << " = " << x / y << endl;
    cout << "ceil " << x << " / " << y << " = " << ceil(z) << endl;
    cout << "round " << x << " / " << y << " = " << round(z) << endl;
    return 0;
}