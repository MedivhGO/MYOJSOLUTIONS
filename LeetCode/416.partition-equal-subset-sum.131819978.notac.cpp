/*
 * [416] Partition Equal Subset Sum
 *
 * https://leetcode.com/problems/partition-equal-subset-sum/description/
 *
 * algorithms
 * Medium (39.11%)
 * Total Accepted:    35.4K
 * Total Submissions: 90.4K
 * Testcase Example:  '[1,5,11,5]'
 *
 * Given a non-empty array containing only positive integers, find if the array
 * can be partitioned into two subsets such that the sum of elements in both
 * subsets is equal.
 * 
 * 
 * Note:
 * 
 * Each of the array element will not exceed 100.
 * The array size will not exceed 200.
 * 
 * 
 * 
 * Example 1:
 * 
 * Input: [1, 5, 11, 5]
 * 
 * Output: true
 * 
 * Explanation: The array can be partitioned as [1, 5, 5] and [11].
 * 
 * 
 * 
 * Example 2:
 * 
 * Input: [1, 2, 3, 5]
 * 
 * Output: false
 * 
 * Explanation: The array cannot be partitioned into equal sum subsets.
 * 
 * 
 */
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        if (nums.empty()) return false;
        sort(nums.begin(),nums.end());
        int sum = accumulate(nums.begin(),nums.end(),0);
        int len = nums.size();
        int cursum = 0;
        for (int i = 0; i < len ;i++) {
           cursum+=nums[i];
            if (cursum == sum - cursum)
                return true;
            
        }
        return false;
        
    }
};
