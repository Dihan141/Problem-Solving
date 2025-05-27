#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'makeAnagram' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING a
 *  2. STRING b
 */

int makeAnagram(string a, string b)
{
    map<char, int> mp3;

    for (int i = 0; i < a.length(); i++)
        mp3[a[i]]++;

    for (int i = 0; i < b.length(); i++)
        mp3[b[i]]--;

    int count = 0;

    for (auto i : mp3)
    {
        count += abs(mp3[i.first]);
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
