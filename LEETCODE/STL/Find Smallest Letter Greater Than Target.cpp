/*
https://leetcode.com/problems/find-smallest-letter-greater-than-target/
*/
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        map<char,int> mp;
        for(char ch: letters) {
            mp[ch] ++;
        }
        char ans;
        for(auto it: mp){
            if(it.first>target){
                ans = it.first;
                break;
            }ans=letters[0];
        }
        return ans;
    }
};
