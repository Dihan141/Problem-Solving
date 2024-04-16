#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    int k, q;
    cin >> k >> q;

    int index[k];
    int queries[q];

    for (int i = 0; i < k; i++)
        cin >> index[i];

    for (int i = 0; i < q; i++)
        cin >> queries[i];

    int lowest_index = index[0];

    for (int i = 0; i < q; i++)
    {
        if (queries[i] < lowest_index)
            cout << queries[i] << " ";
        else
            cout << lowest_index - 1 << " ";
    }

    cout << endl;
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