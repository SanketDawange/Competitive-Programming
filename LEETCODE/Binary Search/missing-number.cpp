/*
https://leetcode.com/problems/missing-number
*/
// NAIVE OR BRUTE FORCE APPROACH: linear search O(n)
// OPTIMISED SOLN: binary search: O(log(n)) 


class Solution {
public:
    int missingNumber(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int low = 0;
        int high = nums.size()-1;
        int mid;
        int ans;
        while(low<=high){
            // calculate mid:
            mid = low + (high-low)/2;

            // matching case:
            if(nums[mid] == mid){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};
