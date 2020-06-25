/*
 * [7] Reverse Integer
 *
 * https://leetcode.com/problems/reverse-integer/description/
 *
 * algorithms
 * Easy (24.39%)
 * Total Accepted:    340.3K
 * Total Submissions: 1.4M
 * Testcase Example:  '123'
 *
 * Given a 32-bit signed integer, reverse digits of an integer.
 * 
 * Example 1:
 * 
 * Input: 123
 * Output:  321
 * 
 * 
 * 
 * Example 2:
 * 
 * Input: -123
 * Output: -321
 * 
 * 
 * 
 * Example 3:
 * 
 * Input: 120
 * Output: 21
 * 
 * 
 * 
 * Note:
 * Assume we are dealing with an environment which could only hold integers
 * within the 32-bit signed integer range. For the purpose of this problem,
 * assume that your function returns 0 when the reversed integer overflows.
 * 
 */
class Solution {
public:
    int reverse(int x) {
       const long int HIGH = 2147483647;
       const long int LOW = -2147483648;
        int flag=0;
        if(x<0){
            x = abs(x);
            flag = 1;
        }
        stringstream ss;
        ss << x;
        string s;
        ss >> s;
        std::reverse(s.begin(),s.end());
        long int number;
        stringstream ms;
        ms << s;
        ms >> number;
        if(flag==1)
            number =  -number;
        if(number>HIGH || number < LOW)
            return 0;
        else
            return number;
            
    }
};
