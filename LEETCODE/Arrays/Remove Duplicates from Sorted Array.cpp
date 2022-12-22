/*
https://leetcode.com/problems/remove-duplicates-from-sorted-array/
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> n;
        for(int i: nums) n.insert(i);
        vector<int> ans(0); for(int i: n) ans.push_back(i);
        for(int i=0; i<n.size(); i++){
            nums[i] = ans[i];
        }
        return ans.size();
    }
};
