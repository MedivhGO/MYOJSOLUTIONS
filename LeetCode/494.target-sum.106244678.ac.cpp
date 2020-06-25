/*
 * [494] Target Sum
 *
 * https://leetcode.com/problems/target-sum/description/
 *
 * algorithms
 * Medium (43.77%)
 * Total Accepted:    41.1K
 * Total Submissions: 94K
 * Testcase Example:  '[1,1,1,1,1]\n3'
 *
 * 
 * You are given a list of non-negative integers, a1, a2, ..., an, and a
 * target, S. Now you have 2 symbols + and -. For each integer, you should
 * choose one from + and - as its new symbol.
 * ⁠
 * 
 * Find out how many ways to assign symbols to make sum of integers equal to
 * target S.  
 * 
 * 
 * Example 1:
 * 
 * Input: nums is [1, 1, 1, 1, 1], S is 3. 
 * Output: 5
 * Explanation: 
 * 
 * -1+1+1+1+1 = 3
 * +1-1+1+1+1 = 3
 * +1+1-1+1+1 = 3
 * +1+1+1-1+1 = 3
 * +1+1+1+1-1 = 3
 * 
 * There are 5 ways to assign symbols to make the sum of nums be target 3.
 * 
 * 
 * 
 * Note:
 * 
 * The length of the given array is positive and will not exceed 20. 
 * The sum of elements in the given array will not exceed 1000.
 * Your output answer is guaranteed to be fitted in a 32-bit integer.
 * 
 * 
 */
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int len = nums.size();
        if (len == 0)
            return 0;
        int ans=0;
        helper(nums,S,0,0,ans);
        
        return ans;
    }
private:
    void helper(vector<int> &t,int S,int cur,int cursum,int& ans) {
        int len = t.size();
        if (len == cur) {
            if (cursum == S)
                ans++;
                
            return ;
        }
        helper(t,S,cur+1,cursum+t[cur],ans);
        helper(t,S,cur+1,cursum-t[cur],ans);
    }
};
