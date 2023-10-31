#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void Generate(int op, int cl, vector<string>& ans, string& curr){
        if(op == 0 && cl == 0){
            ans.push_back(curr);
            return;
        }

        if(op == cl){
            curr.push_back('(');
            Generate(op-1, cl, ans, curr);
        }
        else if(op == 0){
            curr.push_back(')');
            Generate(op, cl-1, ans, curr);
        }
        else if(cl == 0){
            curr.push_back('(');
            Generate(op-1, cl, ans, curr);
        }
        else{
            string curr1 = curr;
            string curr2 = curr;
            curr1.push_back('(');
            curr2.push_back(')');
            Generate(op-1, cl, ans, curr1);
            Generate(op, cl-1, ans, curr2);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr;

        Generate(n, n, ans, curr);
        return ans;
    }
};