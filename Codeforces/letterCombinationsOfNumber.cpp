#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void combinations(string digits, int i, vector<string>& ans, string& curr, map<char, vector<char>>& mp){
        if(digits.length() == 0) return;
        if(i == digits.length()){
            ans.push_back(curr);
            return;
        }

        for(int k=i; k<digits.length(); k++){
            for(int j=0; j<mp[digits[k]].size(); j++){
                curr += mp[digits[k]][j];
                combinations(digits, k+1, ans, curr, mp);
                curr.pop_back();
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        map<char, vector<char>> mp;
        mp['2'] = {'a', 'b', 'c'};
        mp['3'] = {'d', 'e', 'f'};
        mp['4'] = {'g', 'h', 'i'};
        mp['5'] = {'j', 'k', 'l'};
        mp['6'] = {'m', 'n', 'o'};
        mp['7'] = {'p', 'q', 'r', 's'};
        mp['8'] = {'t', 'u', 'v'};
        mp['9'] = {'w', 'x', 'y', 'z'};

        digits.erase(remove(digits.begin(), digits.end(), '"'), digits.end());

        vector<string> ans;
        string curr;
        combinations(digits, 0, ans, curr, mp);
        return ans;
    }
};