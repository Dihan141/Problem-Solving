#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isAlphabeticPalindrome' function below.
 *
 * The function is expected to return a BOOLEAN.
 * The function accepts STRING code as parameter.
 */

bool isAlphabeticPalindrome(string code)
{
    string extracted;

    for (int i = 0; i < code.length(); i++)
    {
        if ((code[i] >= 'A' && code[i] <= 'Z') || (code[i] >= 'a' && code[i] <= 'z'))
            extracted += tolower(code[i]);
    }

    string reversed = extracted;

    reverse(reversed.begin(), reversed.end());

    return extracted == reversed;
}

int main()
{
    string code;
    getline(cin, code);

    bool result = isAlphabeticPalindrome(code);

    cout << result << "\n";

    return 0;
}
