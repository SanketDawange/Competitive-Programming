/*
https://leetcode.com/problems/first-bad-version/
*/
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
// monotonic function :)
class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        int ans;
        int mid;
        while(low<=high) {
            mid = low + (high-low)/2;
            if(isBadVersion(mid)){
                high = mid -1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};
