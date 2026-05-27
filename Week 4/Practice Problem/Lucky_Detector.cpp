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

    string st;
    cin >> st;
    bool isLucky = false;
    for (int i = 0; i < st.size(); i++)
        if (st[i] == '7')
            isLucky = true;
    if (isLucky)
        cout << "Lucky" << endl;
    else
        cout << "Not Lucky" << endl;

    return 0;
}