/*This problem has 3 optimal approach
1. With Set: Maintain a set containing the sub string. If a repeating char is found
    remove from first until repeating character is removed and keep updating the left pointer*
2. With Map: Same as first one, just use a map
3. With Map 2: Use a map for keep track of the last location of a character*/

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> mp;
        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.length(); right++)
        {
            mp[s[right]]++;

            while (mp[s[right]] > 1)
            {
                mp[s[left]]--;
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};