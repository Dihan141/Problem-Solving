#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());

        int first = intervals[0][0];
        int last = intervals[0][1];
        for (int i = 0; i < intervals.size(); i++)
        {
            if (i + 1 < intervals.size() && intervals[i + 1][0] <= last)
            {
                if (intervals[i + 1][1] > last)
                {
                    last = intervals[i + 1][1];
                }
                if (intervals[i + 1][0] < first)
                {
                    first = intervals[i + 1][0];
                }
            }
            else
            {
                ans.push_back({first, last});
                if (i + 1 < intervals.size())
                {
                    first = intervals[i + 1][0];
                    last = intervals[i + 1][1];
                }
            }
        }

        return ans;
    }
};