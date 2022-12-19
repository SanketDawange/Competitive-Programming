/*
https://leetcode.com/problems/search-insert-position
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        while(low<=high) {
            mid = low + (high-low)/2;

            // if target is found at that index return mid;
            if(nums[mid]==target)
                return mid;
            
            // if mid is less than target means target is in right side
            // so skip left half and move to right half
            if(nums[mid]<target)
                low = mid+1;
            
            // else move to left half
            else
                high = mid-1;
        }
        // if execution of program comes still here 
        // means we don't found target in the array
        // so if it's less than mid return mid-1
        // else mid;
        if(target>nums[mid])
            return mid+1;
        return mid;
    }
};
