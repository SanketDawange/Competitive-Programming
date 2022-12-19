/*
https://leetcode.com/problems/intersection-of-two-arrays/
*/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> s1; set<int> s2;
        for(int i: nums1) s1.insert(i); for(int i: nums2) s2.insert(i);
        for(auto e1: s1){
            for(auto e2: s2){
                if(e1==e2)
                    ans.push_back(e1);
            }
        }
        return ans;
    }
};
