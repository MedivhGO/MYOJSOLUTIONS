/*
 * [35] Search Insert Position
 *
 * https://leetcode.com/problems/search-insert-position/description/
 *
 * algorithms
 * Easy (39.96%)
 * Total Accepted:    222.9K
 * Total Submissions: 557.8K
 * Testcase Example:  '[1,3,5,6]\n5'
 *
 * Given a sorted array and a target value, return the index if the target is
 * found. If not, return the index where it would be if it were inserted in
 * order.
 * 
 * You may assume no duplicates in the array.
 * 
 * Example 1:
 * 
 * Input: [1,3,5,6], 5
 * Output: 2
 * 
 * 
 * 
 * Example 2:
 * 
 * Input: [1,3,5,6], 2
 * Output: 1
 * 
 * 
 * 
 * Example 3:
 * 
 * Input: [1,3,5,6], 7
 * Output: 4
 * 
 * 
 * 
 * Example 1:
 * 
 * Input: [1,3,5,6], 0
 * Output: 0
 * 
 * 
 */
public class Solution {
    public int searchInsert(int[] nums, int target) {
        int left = 0,right = nums.length-1;
        int mid;
        while(left <= right) {
            mid = left+(right-left)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target) {
                right = mid - 1;
            }
            else {
                left = mid+1;
            }
        }
        return left;
    }
}
