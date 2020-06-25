/*
 * [438] Find All Anagrams in a String
 *
 * https://leetcode.com/problems/find-all-anagrams-in-a-string/description/
 *
 * algorithms
 * Easy (33.94%)
 * Total Accepted:    51.8K
 * Total Submissions: 152.6K
 * Testcase Example:  '"cbaebabacd"\n"abc"'
 *
 * Given a string s and a non-empty string p, find all the start indices of p's
 * anagrams in s.
 * 
 * Strings consists of lowercase English letters only and the length of both
 * strings s and p will not be larger than 20,100.
 * 
 * The order of output does not matter.
 * 
 * Example 1:
 * 
 * Input:
 * s: "cbaebabacd" p: "abc"
 * 
 * Output:
 * [0, 6]
 * 
 * Explanation:
 * The substring with start index = 0 is "cba", which is an anagram of "abc".
 * The substring with start index = 6 is "bac", which is an anagram of
 * "abc".
 * 
 * 
 * 
 * Example 2:
 * 
 * Input:
 * s: "abab" p: "ab"
 * 
 * Output:
 * [0, 1, 2]
 * 
 * Explanation:
 * The substring with start index = 0 is "ab", which is an anagram of "ab".
 * The substring with start index = 1 is "ba", which is an anagram of "ab".
 * The substring with start index = 2 is "ab", which is an anagram of "ab".
 * 
 * 
 */
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ts(26,0),tp(26,0);
        vector<int> ans;
        if (s.size() < p.size() )
            return ans;
        for ( int i=0;i<p.size();i++) { //完成p的的哈希表的建立
            ++ts[s[i]-'a'];
            ++tp[p[i]-'a'];
        }
        
        if (ts == tp) {
            ans.push_back(0);
            
        }
        
        for (int i=p.size();i<s.size();i++) {
            
            
            ++ts[s[i]-'a'];
            --ts[s[i-p.size()]-'a'];
            
            
            
            if (ts == tp) 
                ans.push_back(i-p.size()+1);
        }
        
        return ans;
            
    }
};
