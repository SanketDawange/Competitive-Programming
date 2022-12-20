/*
https://leetcode.com/problems/valid-perfect-square/
*/
class Solution {
public:
    long long getSqrt(int n){
        long long low = 1;
        long long high = n;
        while(low<=high){
            long long mid = low + (high-low)/2;
            if(mid*mid == n) return mid;
            if(mid*mid>n) high = mid-1;
            else low = mid+1;
        } return low;
    }
    bool isPerfectSquare(int num) {
        long long sqrt = getSqrt(num);
        if(sqrt*sqrt==num) return true;
        return false;
    }
};
