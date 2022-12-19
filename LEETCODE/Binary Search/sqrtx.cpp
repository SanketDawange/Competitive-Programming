/*
https://leetcode.com/problems/sqrtx
*/
class Solution {
public:
    int mySqrt(int x) {
        long long low = 0;
        long long high = x;
        long long ans;
        long long mid;

        while(low<=high){
            mid = low + (high-low)/2;
            if(mid*mid==x)
                return mid;
            if(mid*mid>x)
                high = mid-1;
            else
                low = mid+1;
        }
        // if we dont found the perfect square root;
        return high;
    }

};
