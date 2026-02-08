#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> dp = vector<int>(101, 0);
    int maxMoney(vector<int> &nums, int i)
    {
        if (i >= nums.size())
            return 0;
        if (dp[i] != 0)
            return dp[i];

        dp[i] = max(nums[i] + maxMoney(nums, i + 2), maxMoney(nums, i + 1));
        return dp[i];
    }
    int rob(vector<int> &nums)
    {
        return maxMoney(nums, 0);
    }
};

int main()
{
    vector<int> v = {114, 117, 207, 117, 235, 82, 90, 67, 143, 146, 53, 108, 200, 91, 80, 223, 58, 170, 110, 236, 81, 90, 222, 160, 165, 195, 187, 199, 114, 235, 197, 187, 69, 129, 64, 214, 228, 78, 188, 67, 205, 94, 205, 169, 241, 202, 144, 240};

    Solution sol = Solution();

    cout << sol.rob(v) << endl;

    return 0;
}