/*
https://leetcode.com/problems/number-of-common-factors/
*/
class Solution {
public:
    int commonFactors(int a, int b) {
        int ans;
        
        for(int i=1; i<= min(a,b); i++ ) {
            if(b%i == 0 && a%i == 0)
                ans++;
        }
        
        return ans;
    }
};
