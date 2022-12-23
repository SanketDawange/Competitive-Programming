class Solution {
public:
    bool isPowerOfTwo(int n) {
        // edge case
        if(n==1) return true;
        // base case
        if(n==2) return true;
        if(n&1 || n==0) return false;
        return isPowerOfTwo(n/2);
    }
};
