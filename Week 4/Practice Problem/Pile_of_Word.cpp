#include <bits/stdc++.h>
using namespace std;

void pileOfWord()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() != s2.size())
    {
        cout << "NO" << endl;
        return;
    }
    if (s1 == s2)
    {
        cout << "YES" << endl;
        return;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        pileOfWord();
    }
    return 0;
}
