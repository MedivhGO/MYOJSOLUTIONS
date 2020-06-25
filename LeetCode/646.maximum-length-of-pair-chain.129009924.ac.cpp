/*
 * [646] Maximum Length of Pair Chain
 *
 * https://leetcode.com/problems/maximum-length-of-pair-chain/description/
 *
 * algorithms
 * Medium (47.59%)
 * Total Accepted:    14.3K
 * Total Submissions: 30K
 * Testcase Example:  '[[1,2], [2,3], [3,4]]'
 *
 * 
 * You are given n pairs of numbers. In every pair, the first number is always
 * smaller than the second number.
 * 
 * 
 * 
 * Now, we define a pair (c, d) can follow another pair (a, b) if and only if b
 * < c. Chain of pairs can be formed in this fashion. 
 * 
 * 
 * 
 * Given a set of pairs, find the length longest chain which can be formed. You
 * needn't use up all the given pairs. You can select pairs in any order.
 * 
 * 
 * 
 * Example 1:
 * 
 * Input: [[1,2], [2,3], [3,4]]
 * Output: 2
 * Explanation: The longest chain is [1,2] -> [3,4]
 * 
 * 
 * 
 * Note:
 * 
 * The number of given pairs will be in the range [1, 1000].
 * 
 * 
 */
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        if (pairs.empty()) return 0;
        
        sort(pairs.begin(),pairs.end(),[](vector<int> &a,vector<int> &b)->bool{ 
                    return a[1] < b[1] || a[1] == b[1] && a[0] < b[0];
                                                                            });
        int count = 0;
        vector<int> &pair = pairs[0];
        for (int i = 0;i<pairs.size();i++) {
            if (i == 0 || pair[1]<pairs[i][0]) {
                count++;
                pair = pairs[i];
            }
        }
        return count;
       
       
    
        
    }
};
