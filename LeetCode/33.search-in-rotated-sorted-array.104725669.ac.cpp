/*
 * [33] Search in Rotated Sorted Array
 *
 * https://leetcode.com/problems/search-in-rotated-sorted-array/description/
 *
 * algorithms
 * Medium (32.06%)
 * Total Accepted:    222.2K
 * Total Submissions: 693.1K
 * Testcase Example:  '[]\n5'
 *
 * Suppose an array sorted in ascending order is rotated at some pivot unknown
 * to you beforehand.
 * 
 * (i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
 * 
 * You are given a target value to search. If found in the array return its
 * index, otherwise return -1.
 * 
 * You may assume no duplicate exists in the array.
 */
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0,high = nums.size()-1;
        
        while (low <= high) {
            int mid = low+(high-low)/2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid]>=nums[low]) {
                if (nums[low]<=target && target<nums[mid]) 
                        high = mid - 1;
                else 
                        low = mid +  1;
            } else {
                if (target>nums[mid] && target<=nums[high])
                        low = mid + 1;
                else 
                        high = mid-1;
            }
        }
        return -1;
    }
};
