/*
 * [300] Longest Increasing Subsequence
 *
 * https://leetcode.com/problems/longest-increasing-subsequence/description/
 *
 * algorithms
 * Medium (38.72%)
 * Total Accepted:    106.8K
 * Total Submissions: 275.8K
 * Testcase Example:  '[10,9,2,5,3,7,101,18]'
 *
 * 
 * Given an unsorted array of integers, find the length of longest increasing
 * subsequence.
 * 
 * 
 * For example,
 * Given [10, 9, 2, 5, 3, 7, 101, 18],
 * The longest increasing subsequence is [2, 3, 7, 101], therefore the length
 * is 4. Note that there may be more than one LIS combination, it is only
 * necessary for you to return the length.
 * 
 * 
 * Your algorithm should run in O(n2) complexity.
 * 
 * 
 * Follow up: Could you improve it to O(n log n) time complexity? 
 * 
 * Credits:Special thanks to @pbrother for adding this problem and creating all
 * test cases.
 */
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        const int size = nums.size();
        if (size == 0) return 0;
        vector<int> dp(size,1);
        int ans = 1;
        for (int i = 1; i < size;i++) {
            for (int j = 0; j < i;j++) {
                if (nums[j] < nums[i])
                    dp[i] =max(dp[i],dp[j]+1);
            }
            
            ans = max(ans,dp[i]);
        }
        return ans;
    }
};
