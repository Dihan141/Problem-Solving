#include<bits/stdc++.h>

using namespace std;

/*Given an array of strings I have to group the anagrams together.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Example 2:

Input: strs = [""]
Output: [[""]]
Example 3:

Input: strs = ["a"]
Output: [["a"]]
 
Solution:
suppose I want to group anagrams of 'eat'. The anagrams are eat, ate, tea. The sorted version of eat is aet. Every anagram can be sorted into aet
so, we can create a map and a vector value which stores all anagrams of aet under the key 'aet'.
The map would look like thi:
'aet': ['eat', 'ate', 'tea']

Then we can just traverse the map and push the vectors into answer.
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for(int i=0; i<strs.size(); i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            mp[s].push_back(strs[i]);
        }

        for(auto i: mp){
            ans.push_back(i.second);
        }

        return ans;
    }
};