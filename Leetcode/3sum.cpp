#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            if(mp[nums[i]])
                continue;

            mp[nums[i]] = 1;

            int target = (-1) * nums[i];

            int j=0;
            int k=nums.size()-1;

            while(j<k){
                if(i == j)
                    continue;
                
                if(nums[j] + nums[k] < target)
                    j++;
                else if(nums[j] + nums[k] > target)
                    k--;
                else{
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);

                    ans.push_back(v);
                    j++;
                    k--;
                }
            }
        }

        return ans;
    }
};