#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int goal = nums.size() - 1;
        int l = goal - 1;

        while (l >= 0)
        {
            if (l + nums[l] >= goal)
            {
                goal = l;
            }

            l--;
        }

        return goal == 0;
    }
};