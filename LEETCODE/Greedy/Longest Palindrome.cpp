/*
https://leetcode.com/problems/longest-palindrome/   
*/
class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mp;
        for(char c: s) mp[c]++;
        int ans = 0;
        for(auto it: mp){
            ans += it.second/2*2;
            if(ans%2==0 && it.second%2==1)
                ans++;
        } return ans;
    }
};
