/*
https://leetcode.com/problems/arranging-coins
*/
class Solution {
public:
    int arrangeCoins(int n) {
        int low = 1;
        int high = n;
        while(low<=high) {
            long long mid = low + (high-low)/2;
            long long sum = (mid*(mid+1))/2;
            if(sum==n) return mid;
            if(sum<n) low = mid+1;
            else high = mid-1;
        }
        return high;
    }
};
