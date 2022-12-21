/*
https://leetcode.com/problems/split-a-string-in-balanced-strings
*/
class Solution {
public:
    int balancedStringSplit(string s) {
       	int l = 0, r = 0, count = 0;
        for (char c : s) {
            if (c == 'L') {
                l++;
            } else {
                r++;
            }
            if (l == r) {
                count++;
                l = 0;
                r = 0;
            }
        }
        return count;
    }
};
