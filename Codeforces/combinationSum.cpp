#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void sum(int i, int s, int t, vector<int>& curr, vector<vector<int>>& ans, vector<int>& cand){
        if(s == t){
            ans.push_back(curr);
            return;
        }
        if(s > t) return;
        for(int k=i; k<cand.size(); k++){
            if(k!=i && cand[k] == cand[k-1])
                continue;
            s += cand[k];
            curr.push_back(cand[k]);
            sum(k+1, s, t, curr, ans, cand);
            curr.pop_back();
            s -= cand[k];
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> curr;
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        sum(0, 0, target, curr, ans, candidates);
        return ans;
    }
};