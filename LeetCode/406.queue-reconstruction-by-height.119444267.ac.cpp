/*
 * [406] Queue Reconstruction by Height
 *
 * https://leetcode.com/problems/queue-reconstruction-by-height/description/
 *
 * algorithms
 * Medium (56.48%)
 * Total Accepted:    36.4K
 * Total Submissions: 64.4K
 * Testcase Example:  '[[7,0],[4,4],[7,1],[5,0],[6,1],[5,2]]'
 *
 * Suppose you have a random list of people standing in a queue. Each person is
 * described by a pair of integers (h, k), where h is the height of the person
 * and k is the number of people in front of this person who have a height
 * greater than or equal to h. Write an algorithm to reconstruct the queue.
 * 
 * 
 * Note:
 * The number of people is less than 1,100.
 * 
 * 
 * 
 * 
 * Example
 * 
 * Input:
 * [[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]]
 * 
 * Output:
 * [[5,0], [7,0], [5,2], [6,1], [4,4], [7,1]]
 * 
 * 
 */
class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        vector<pair<int,int>> ans;
        if (people.empty()) return ans;
        
        sort(people.begin(),people.end(),[](pair<int,int> a1,pair<int,int> a2){ return a1.first>a2.first || a1.first== a2.first && a1.second < a2.second;});
        int len = people.size();
        for(auto& p : people)
            ans.insert(ans.begin()+p.second,p);
        
        return ans;
    }
};
