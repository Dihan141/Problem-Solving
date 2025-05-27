#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    string s;
    cin >> s;

    int num = stoi(s);

    int root = sqrt(num);

    if (root * root != num)
    {
        cout << "-1" << endl;
        return;
    }

    cout << "0" << " " << root << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Solve();
    }

    return 0;
}