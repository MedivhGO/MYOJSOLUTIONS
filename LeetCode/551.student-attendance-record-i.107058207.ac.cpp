/*
 * [551] Student Attendance Record I
 *
 * https://leetcode.com/problems/student-attendance-record-i/description/
 *
 * algorithms
 * Easy (44.37%)
 * Total Accepted:    25.8K
 * Total Submissions: 58.1K
 * Testcase Example:  '"PPALLP"'
 *
 * You are given a string representing an attendance record for a student. The
 * record only contains the following three characters:
 * 
 * 
 * 
 * 'A' : Absent. 
 * 'L' : Late.
 * ⁠'P' : Present. 
 * 
 * 
 * 
 * 
 * A student could be rewarded if his attendance record doesn't contain more
 * than one 'A' (absent) or more than two continuous 'L' (late).    
 * 
 * You need to return whether the student could be rewarded according to his
 * attendance record.
 * 
 * Example 1:
 * 
 * Input: "PPALLP"
 * Output: True
 * 
 * 
 * 
 * Example 2:
 * 
 * Input: "PPALLL"
 * Output: False
 * 
 * 
 * 
 * 
 * 
 */
class Solution {
public:
    bool checkRecord(string s) {
        if (s.empty())
            return false;
        if (s.find("LLL")!= string::npos)
            return false;
        int a_count = 0;
        for (int i=0;i<s.size();++i) {
            if (s[i] == 'A') {
                a_count++; 
                if (a_count>=2)
                    return false;
            }
        }
        return true;
    }
};
