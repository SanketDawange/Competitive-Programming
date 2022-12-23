class Solution {
public:
    bool isPowerOfThree(int n) {
        // base case
        if(n<=0) return false;
        if(n==3 or n==1) return true;
        if(n%3) return false;
        return isPowerOfThree(n/3);
    }
};
