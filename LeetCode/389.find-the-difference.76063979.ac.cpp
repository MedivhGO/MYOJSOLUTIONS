/*
 * [389] Find the Difference
 *
 * https://leetcode.com/problems/find-the-difference/description/
 *
 * algorithms
 * Easy (51.06%)
 * Total Accepted:    91.6K
 * Total Submissions: 179.4K
 * Testcase Example:  '"abcd"\n"abcde"'
 *
 * 
 * Given two strings s and t which consist of only lowercase letters.
 * 
 * String t is generated by random shuffling string s and then add one more
 * letter at a random position.
 * 
 * Find the letter that was added in t.
 * 
 * Example:
 * 
 * Input:
 * s = "abcd"
 * t = "abcde"
 * 
 * Output:
 * e
 * 
 * Explanation:
 * 'e' is the letter that was added.
 * 
 */
class Solution {
public:
    char findTheDifference(string s, string t) {
        int a[26] = {0};
        int r;
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            a[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]!=0)
                r = i;
        }
        return 'a'+r;

}
};
